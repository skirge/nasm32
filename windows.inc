%ifndef INCLUDED_WIN32N_INC
%define INCLUDED_WIN32N_INC
[LIST -]

%ifndef USELINK
	%define USEALINK
	%define USEGOLINK
	%define _wsprintfA wsprintfA
%else
	%define MessageBoxA MessageBoxA@16
	%define MessageBoxW MessageBoxW@16
	%define DefWindowProcA DefWindowProcA@16
	%define GlobalAlloc GlobalAlloc@8
	%define GlobalFree GlobalFree@4
%endif


;[warning +macro-params]
[warning +macro-selfref]
[warning +orphan-labels]

%include "util.inc"

%define CODESEG section .text
%define DATASEG section .data
%define UDATASEG section .bss
%define CONSTSEG section .rdata
%define LINKERSEG section .drectve info

%ifdef INCLUDED_NTDDK_INC
    globaldef DriverEntry
%else
    globaldef START
%endif

%ifdef USELINK
	%IMACRO  cw      1.nolist
		[extern __imp__%{1}]
		call [__imp__%{1}]
	%ENDMACRO
%else
	%IMACRO  cw      1.nolist
		[extern %{1}]
		call [%{1}]
	%ENDMACRO
%endif

%imacro libs 0-*.nolist
    LINKERSEG
	%ifndef __LINKERSEGDEFINED__
	%define __LINKERSEGDEFINED__ 1
        %ifdef INCLUDED_NTDDK_INC
	        db '-entry:DriverEntry'
        %else
	        db '-entry:START'
        %endif
	%endif
%if %0 > 0
    %rep %0
        db ' -defaultlib:'
        param2str %1,"
        %rotate 1
    %endrep
%endif
    db 0
%endmacro

%define ADDR "ADDR",
%define NESTED "NESTED",
%define UNICODE "UNICODE",

%macro API2  1-*.nolist

%ifdef USELINK
	%define %%j __imp__%1@
%else
	%define %%j %1
%endif

%assign %%i %0-1
%assign %%params 0
%rep (%0-1)
    %rotate -2
    %ifidni %1,"ADDR"
        %rotate 1
        lea     eax,[%1]
        push    eax
        %rotate -1
	    %assign %%i	%%i-2
        %assign %%params %%params+1
    %elifidni %1,"UNICODE"
        %rotate 1
        pushW   %1
        %rotate -1
	    %assign %%i	%%i-2
        %assign %%params %%params+1
    %elifidni %1,"NESTED"
        %rotate 1
        API    %1 
        push    eax
        %assign %%params %%params+1
        %rotate -1
        %assign %%i	%%i-2
    %elifidni %1,EMPTY
        %rotate 1

        %assign %%params %%params+1
        %assign %%i	%%i-1
	
	%else

        %rotate 1
        push    %1
        %assign %%params %%params+1
        %assign %%i	%%i-1
    %endif
    %if %%i < 1
        %exitrep
    %endif
%endrep

%ifndef USELINK
    extern %%j
    call     [%%j]
%else
    %assign %%params %%params*4
    %define %%k %%j %+ %%params
    extern %%k
    call     [%%k]
%endif
%endmacro

%macro API  1-*.nolist

%ifdef USELINK
	%define %%j __imp__%1@
%else
	%define %%j %1
%endif

%assign %%i %0-1
%assign %%params 0
%rep (%0-1)
    %rotate -2
    %ifidni %1,"ADDR"
        %rotate 1
        lea     eax,[%1]
        push    eax
        %rotate -1
	    %assign %%i	%%i-2
        %assign %%params %%params+1
    %elifidni %1,"UNICODE"
        %rotate 1
        pushW   %1
        %rotate -1
	    %assign %%i	%%i-2
        %assign %%params %%params+1
    %elifidni %1,"NESTED"
        %rotate 1
        API2    %1 
        push    eax
        %assign %%params %%params+1
        %rotate -1
        %assign %%i	%%i-2
    %elifidni %1,EMPTY
        %rotate 1

        %assign %%params %%params+1
        %assign %%i	%%i-1
	
	%else
        %rotate 1
        push    %1
        %assign %%params %%params+1
        %assign %%i	%%i-1
    %endif
    %if %%i < 1
        %exitrep
    %endif
%endrep

%ifndef USELINK
    extern %%j
    call     [%%j]
%else
    %assign %%params %%params*4
    %define %%k %%j %+ %%params
    extern %%k
    call     [%%k]
%endif

%endmacro



;***************************************************************************
; COM stuff
%imacro com 2-*.nolist
%define %%1 %1
%define %%2 %2
%rep (%0-2)
    %rotate -1
    %ifnidn %1,EMPTY
    push    DWORD %1
    %endif
%endrep
    mov     eax,[%%1]
    push    eax
    mov     eax,[eax]
    call    [eax+%%2]
%endmacro

%macro cm 2
    mov     eax,[%1]
    push    eax
    mov     eax,[eax]
    call    [eax+%2]
%endmacro

%MACRO STDMETHOD 1-*.nolist
    .%{1}      resd 1
%ENDMACRO

STRUC IUnknown
    STDMETHOD   QueryInterface
    STDMETHOD   AddRef
    STDMETHOD   Release
ENDSTRUC

%MACRO INHERIT_IUnknown 0.nolist
    STDMETHOD   QueryInterface
    STDMETHOD   AddRef
    STDMETHOD   Release
%ENDMACRO

%MACRO MAKE_HRESULT 4.nolist ;hres_name,severity,facility,code
%1 EQU (%2 << 31)|((%3 & 0FFFh) << 16)|(%4 & 0FFFFh)
%ENDMACRO

%ifndef INCLUDED_NTDDK_INC
;***************************************************************************
%include "win32\enums.inc"
%include "win32\structs.inc"
;***************************************************************************


;--------------------------------------------------------------------------
; MACROS

%ifdef UNICODE
	%define show_string show_stringw
%else
	%define show_string show_stringa
%endif

%macro show_stringa 1
        push    MB_OK
        push    0
    %ifstr %1
        jmp %%after
        %%string: db %1,0
        %%after:
        push    %%string
    %else
        push    %1
    %endif
        push    0
        cw      MessageBoxA
%endmacro

%macro show_stringw 1
        push    MB_OK
        push    0
    %ifstr %1
        jmp %%after
        %%string: db %1,0
        %%after:
        push    %%string
    %else
        push    %1
    %endif
        push    0
        cw      MessageBoxW
%endmacro

%macro show_number 1
    push    4096                        ;SIZE_T dwBytes
	push    GMEM_FIXED                  ;UINT uFlags
	cw      GlobalAlloc               ;HGLOBAL
    or      eax,eax
    jz      %%exit
    push    eax
    
    jmp     %%after
    %%format: db '%.8u',0
%%after:
    push    %1
    push    %%format
    push    eax
    cw      _wsprintfA
    add     esp,3*4
    mov     eax,[esp]
    push    MB_OK                       ;UINT uType
	push    0                           ;LPCSTR lpCaption
	push    eax                         ;LPCSTR lpText
	push    0                           ;HWND hWnd
	cw      MessageBoxA	            ;int
    cw      GlobalFree 
%%exit:       
%endmacro

%macro show_hex 1
    push    4096                        ;SIZE_T dwBytes
	push    GMEM_FIXED                  ;UINT uFlags
	cw      GlobalAlloc                 ;HGLOBAL
    or      eax,eax
    jz      %%exit
    push    eax
    
    jmp     %%after
    %%format: db '%.8X',0
%%after:
    push    %1
    push    %%format
    push    eax
    cw      _wsprintfA
    add     esp,3*4
    mov     eax,[esp]
    push    MB_OK                       ;UINT uType
	push    0                           ;LPCSTR lpCaption
	push    eax                         ;LPCSTR lpText
	push    0                           ;HWND hWnd
	cw      MessageBoxA                 ;int
    cw      GlobalFree 
%%exit:       
%endmacro

;--------------------------------------------------------------------------------------
; dialog

%assign DISPATCH_TABLE_SIZE 1025

%macro InitWindowMessageTable 2-*
%define %%1 %1_MessageTable
%define %%2 %1_
	push	edi
	mov		edi,%%1
	mov		ecx,DISPATCH_TABLE_SIZE
    extern DefWindowProcA
	mov		eax,[DefWindowProcA]
	rep		stosd
%rep %0-1
	%rotate 1
	mov		dword [%%1+%{1}*4],%%2 %+ %1
%endrep
udataseg
align 16
%%1: resd DISPATCH_TABLE_SIZE
codeseg
%endmacro

%macro WindowProc 1
%define .WndName %1_
%{1}_Proc:
	mov		eax,[esp+8]
;%ifdef DISPATCH_TROUBLE	
	cmp		eax,DISPATCH_TABLE_SIZE
	ja		near [DefWindowProcA]
;%endif	
	jmp		[%{1}_MessageTable+eax*4]	
%endmacro

%macro InitDialogMessageTable 2-*
%define %%1 %1_MessageTable
%define %%2 %1_
	push	edi
	mov		edi,%%1
	mov		ecx,DISPATCH_TABLE_SIZE
	mov		eax,%1_Ret
	rep		stosd
%rep %0-1
	%rotate 1
	mov		dword [%%1+%{1}*4],%%2 %+ %1
%endrep
udataseg
align 16
%%1: resd DISPATCH_TABLE_SIZE
codeseg
%endmacro

%macro DialogProc 1
%define .WndName %1_
%{1}_Proc:
	mov		eax,[esp+8]
;%ifdef DISPATCH_TROUBLE	
	cmp		eax,DISPATCH_TABLE_SIZE
	ja		%{1}_Ret
;%endif
	jmp		[%{1}_MessageTable+eax*4]	
%{1}_Ret:
	sub		eax,eax
	ret		16
%endmacro

%macro HandleMessage 1
%push noframe
.WndName %+ %{1}:
%define .hWnd esp+4
%define .uMsg esp+8
%define .wParam esp+12
%define .lParam esp+16
%endmacro

%macro HandleMessageFrame 1
%push frame
.WndName %+ %{1}:
%define .hWnd ebp+8
%define .uMsg ebp+12
%define .wParam ebp+16
%define .lParam ebp+20
%assign %$LOCAL 0	
%endmacro

%macro WndRet 0-1 0
%ifctx frame
    %ifdef %$savedregs
        popd    %$savedregs
    %endif
    %if %$LOCAL > 0
        _add esp,(%$LOCAL+3) & 0xFFFFFFFC
    %endif
    %ifdef %$enter
    leave
    %endif
%endif
	%pop
	_mov	eax,%1
	retn	16
%endmacro

%macro DlgRet 0-1 1
%ifctx frame
    %ifdef %$savedregs
        popd    %$savedregs
    %endif
    %if %$LOCAL > 0
        _add esp,(%$LOCAL+3) & 0xFFFFFFFC
    %endif
    %ifdef %$enter
    leave
    %endif
%endif
	%pop
	_mov	eax,%1
	retn	16
%endmacro

;-----------------------------------------------------------------------------------
[LIST +]

%endif ;INCLUDED_NTDDK_INC
%endif ;INCLUDED_WIN32N_INC