%ifndef		INCLUDED_NTDDK_INC
%define		INCLUDED_NTDDK_INC

%include "windows.inc"

struc		ListEntry
.flink		resd	1
.blink		resd	1
endstruc

struc		SingleListEntry
.flink		resd	1
endstruc	


struc	ObjectAttributes
.Size				resd	1	
.RootDirectory 	   		resd	1
.ObjectName			resd	1
.Attributes			resd	1
.SecurityDescriptor      	resd	1
.SecurityQuality		resd	1
endstruc


struc	KeTrapFrame
.DebugEBP	resd	1	; 00
.DebugEIP	resd	1	; 04
.DebugArgMark	resd	1	; 08
.DebugPointer	resd	1	; 0C
.TempCS		resd	1	; 10
.TempEsp	resd	1	; 14
.DR0		resd	1	; 18
.DR1    	resd	1	; 1C
.DR2		resd	1	; 20
.DR3		resd	1	; 24
.DR6		resd	1	; 28
.DR7		resd	1	; 2C
.GS		resw	1	; 30
		resw	1	; 32
.ES		resw	1	; 34
		resw	1	; 36
.DS		resw	1	; 38
		resw	1	; 3A
.EDX		resd	1	; 3C
.ECX		resd	1	; 40
.EAX		resd	1	; 44
.PreviousMode	resd	1	; 48
.ExceptionList	resd	1	; 4C
.FS		resw	1	; 50
		resw	1	; 52
.EDI		resd	1	; 54
.ESI		resd	1	; 58
.EBX		resd	1	; 5C
.EBP		resd	1	; 60
.Error		resd	1	; 64
.EIP		resd	1	; 68
.CS		resw	1	; 6C
		resw	1	; 6E
.EFLAGS 	resd	1	; 70
.ESP		resd	1	; 74
.SS		resw	1	; 78
		resw	1	; 7A
.ES_V86		resw	1	; 7C
		resw	1	; 7E
.DS_V86		resw	1	; 80
		resw	1	; 82
.FS_V86		resw	1	; 84
		resw	1	; 86
.GS_V86		resw	1	; 88
endstruc

struc			KDPC
.Type			resw	1
.Number			resb	1
.Importance		resb	1
.DpcListEntry		resb	ListEntry_size
.DeferedRoutine		resd	1
.DeferedContext		resd	1
.SystemArgument1	resd	1
.SystemArgument2	resd	1
.Lock			resd	1
endstruc

LowImportance		EQU	0
MediumImportance	EQU	1
HighImportance		EQU	2

struc			KAPC
.Type			resw	1
.Size			resw	1
			resd	1
.Thread			resd	1
.ApcListEntry		resb	ListEntry_size
.KernelRoutine		resd	1
.RundownRoutine		resd	1
.NormalRoutine		resd	1
.NormalContext		resd	1
.SystemArgument1	resd	1
.SystemArgument2	resd	1
.ApcStateIndex		resb	1
.ApcMode		resb	1
.Inserted		resb	1
			resb	1
endstruc

struc			KAPC_STATE
ApcListHead		resb	2*ListEntry_size
Process			resd	1
KernelApcInProgress	resb	1
KernelApcPending	resb	1
UserApcPending		resb	1			
			resb	1
endstruc

struc			DISPATCHER_HEADER
.Type			resb	1
.Absolute		resb	1
.Size			resb	1
.Inserted		resb	1
.SignalState		resd	1
.WaitListHead		resb	ListEntry_size	
endstruc

struc			KTIMER
.Header			resb	DISPATCHER_HEADER_size
.DueTime		resd	2
.TimerListEntry		resb	ListEntry_size
.DPC			resd	1
.Period			resd	1		
endstruc

struc			KSEMAPHORE
.Header			resb	DISPATCHER_HEADER_size
.Limit			resd	1
endstruc

struc			WaitBlock
.WaitListEntry		resb	ListEntry_size
.Thread			resd	1
.Object			resd	1
.NextWaitBlock		resd	1
.WaitKey		resw	1
.WaitType		resw	1
endstruc

struc			KTHREAD
.Header			resb	DISPATCHER_HEADER_size
.MutantListHead		resb	ListEntry_size
.InitialStack		resd	1
.StackLimit		resd	1
.UserTeb		resd	1
.TlsArray		resd	1
.KernelStack		resd	1
.DebugActive		resb	1
.State			resb	1
.Alerted		resb	1
			resb	1
.Iopl			resb	1
.NpxState		resb	1
.Saturation		resb	1
.Priority		resb	1
.ApcState		resb	KAPC_STATE_size
.ContextSwitches	resd	1
.WaitStatus		resd	1
.WaitIrql		resb	1
.WaitMode		resb	1
.WaitNext		resb	1
.WaitReason		resb	1
.WaitBlockList		resd	1
.WaitListEntry		resb	ListEntry_size
.WaitTime		resd	1
.BasePriority		resb	1
.DecrementCount		resb	1
.PriorityDecrement	resb	1
.Quantum		resb	1
.WaitBlockArray		resb	4*WaitBlock_size
.LegoData		resd	1
.KernelApcDisable	resd	1
.UserAffinity		resd	1
.SystemAfinityActive	resb	1
			resb	1
			resw	1
.ServiceTable		resd	1
.Queue			resd	1
.APCQueueLock		resd	1
.Timer			resb	KTIMER_size
.QueueListEntry		resb	ListEntry_size
.Affinity		resd	1
.Preempted		resb	1
.ProcessReadyQueue	resb	1
.KernelStackResident	resb	1
.NextProcessor		resb	1
.CallbackStack		resd	1
.Win32Thread		resd	1
.TrapFrame		resd	1
.APCStatePointer	resd	1
			resd	1
.EnableStackSwap	resb	1
.LargeStack		resb	1
.ResourceIndex		resb	1
.PreviousMode		resb	1
.KernelTime		resd	1
.UserTime		resd	1
.SavedAPCState		resb	KAPC_STATE_size
.Alertable		resb	1
.ApcStateIndex		resb	1
.ApcQueueable		resb	1
.AutoAlignment		resb	1
.StackBase		resd	1
.SuspendAPC		resb	KAPC_size
.SuspendSemaphore	resb	KSEMAPHORE_size
.ThreadListEntry	resb	ListEntry_size
.FreezeCount		resb	1
.SuspendCount		resb	1
.IdealProcessor		resb	1
.DisableBoost		resb	1
endstruc

struc		KProcess


                            
endstruc

%define	KPCRSelfPointer		0xFFDFF000

struc			NT_TIB
.ExceptionList   	resd	1
.StackBase		resd	1
.StackLimit		resd	1
.SubsytemTib		resd	1
.FiberData		resd	1
.Arbitrary		resd	1
.SelfPointer		resd	1
endstruc

struc			KPCR
.NtTib			resb	NT_TIB_size
.SelfPointer            resd	1
.PrcbPointer		resd	1
.Irql			resb	1
			resb	3
.Irr			resd	1
.IrrActive		resd	1
.Idr			resd	1
			resd	1
.pKIDTENTRY		resd	1
.pKGDTENTRY		resd	1
.pKTSS			resd	1
.MajorVersion		resw	1
.MinorVersion		resw	1
.SetMember		resd	1
.SetScaleFactor		resd	1
.DebugActive		resb	1
.Number			resb	1
.VdmAlert		resb	1
			resb	1
			resb	64		;Kernel Reserved
			resb	64		;Hal Reserved
.InterruptMode		resd	1
.Spare			resd	1
			resb	68		;KernelReserved
						;From here , a KPRCB struct is nested
endstruc

; the folowing macro expects a POBJECT_ATTRIBUTES in EAX !!!

%macro  InitializeObjectAttributes 4
	mov	[eax+ObjectAttributes.Size] , dword ObjectAttributes_size	
	mov	[eax+ObjectAttributes.ObjectName] , %1
	mov	[eax+ObjectAttributes.Attributes]  ,%2
	mov	[eax+ObjectAttributes.RootDirectory] 	  ,%3
	mov	[eax+ObjectAttributes.SecurityDescriptor] , %4
	mov	[eax+ObjectAttributes.SecurityQuality] , dword 0	
%endmacro	


HW_ERROR_CODE_ON	EQU	1
HW_ERROR_CODE_OFF	EQU	0

NESTED_FRAME			EQU	1
PRIMARY_FRAME			EQU	0

;-------------------------------------------------------------------------------
; these macros build/remove proper Trap frames as expected by the rest of the
; NT kernel. there are two kinds of Trap frames (second parameter to macro):
;
; one we call a Primary frame and is used by exception handlers that are not
; supposed to nest (i.e. they won't occur while another exception is being
; processed), it contains less saved state info than a Nested frame,
;
; and the other one we call a Nested frame because exceptions and interrupts
; that use it can be invoked inside other handlers. best (and perhaps only ;-)
; example is the int2E handler (native API). this frame contains more state
; info, and chaining to previous frames
;
; these macros omit saving debugging related information, you might want to
; take this into account when investigating some problems ;-)
;
; the first macro parameter specifies if the error code is saved by the CPU
; itself (OFF) or should be simulated by the macro (ON)
;-------------------------------------------------------------------------------
%macro	ExceptionFrame2KeTrapFrame 2

%if	%1 = HW_ERROR_CODE_ON
	push	byte 0					; fake Error Code
%endif

	push	ebp
	push	ebx
	push	esi
	push	edi
	push	fs
	push	byte 0x30
	pop	fs
	xor	ebx, ebx
	push	dword [fs:ebx]
	mov	esi , [fs:0x124]

%if	%2 = NESTED_FRAME
	mov	dword [fs:ebx] , -1
	push	dword [esi+KTHREAD.EnableStackSwap]
%elif	%2 = PRIMARY_FRAME
	push	byte -1
%else
%error specify NESTED_FRAME or PRIMARY_FRAME, not some bullshit like %2
%endif

	push	eax
	push	ecx
	push	edx
	push	ds
	push	es
	push	gs
	push	byte 0x23
	push	byte 0x23
	pop	ds
	pop	es
	sub	esp , byte 0x30
	test	byte [esp+KeTrapFrame.EFLAGS+2], 2	; V86 client?
	jz	%%PM

	movzx	ebx , word [esp+KeTrapFrame.DS_V86]
	mov	[esp+KeTrapFrame.DS] , ebx
	movzx	ebx , word [esp+KeTrapFrame.ES_V86]
	mov	[esp+KeTrapFrame.ES] , ebx
	movzx	ebx , word [esp+KeTrapFrame.FS_V86]
	mov	[esp+KeTrapFrame.FS] , ebx
	movzx	ebx , word [esp+KeTrapFrame.GS_V86]
	mov	[esp+KeTrapFrame.GS] , ebx

%if	%2 = NESTED_FRAME
	mov	bl , 1
	jmp	short %%set_prevmode
%endif

%%PM:

%if	%2 = NESTED_FRAME
	mov	bl , byte [esp+KeTrapFrame.CS]
	and	bl , 1

%%set_prevmode:
	mov	byte [esi+KTHREAD.EnableStackSwap] , bl
%endif

	mov	ebp , esp
	cld

%if	%2 = NESTED_FRAME
	mov	ebx , [esi+KTHREAD.TrapFrame]
	mov	[ebp+KeTrapFrame.EDX] , ebx
%endif

	mov	[esi+KTHREAD.TrapFrame] , ebp
%endmacro



%macro	KeTrapFrame2ExceptionFrame 2

	mov	edx , [ebp+KeTrapFrame.ExceptionList]
	mov	[fs:0] , edx

%if	%2 = NESTED_FRAME
	mov	esi , [fs:0x124]
	mov	edx , [ebp+KeTrapFrame.EDX]
	mov     [esi+KTHREAD.TrapFrame] , edx	
	mov	dl , [ebp+KeTrapFrame.PreviousMode]
	mov	[esi+KTHREAD.EnableStackSwap] , dl
%endif

	lea	esp , [ebp+KeTrapFrame.GS]
	test	byte [ebp+KeTrapFrame.EFLAGS+2] , 2
	jnz	%%V86

	pop	gs
	pop	es
	pop	ds

%%V86:
	lea	esp , [ebp+KeTrapFrame.EDX]
	pop	edx
	pop	ecx
	pop	eax		
	lea	esp , [ebp+KeTrapFrame.FS]
	test	byte [ebp+KeTrapFrame.EFLAGS+2] , 2
	jnz	%%V86_

	pop	fs

%%V86_:
	lea	esp , [ebp+KeTrapFrame.EDI]
        pop	edi
	pop	esi
	pop	ebx
	pop	ebp

%if	%1 = HW_ERROR_CODE_ON
	add	esp , byte 4		;if we pushed ErrorCode , then pop it	
%endif
%endmacro


%endif