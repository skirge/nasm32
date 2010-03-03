%ifndef __D3DX8MATH__
%DEFINE __D3DX8MATH__

STRUC ID3DXMatrixStack
;   /*** IUnknown methods ***/
    INHERIT_IUnknown
;   /*** ID3DXMatrixStack methods ***/

    STDMETHOD   Pop
    STDMETHOD   Push
    STDMETHOD   LoadIdentity
    STDMETHOD   LoadMatrix, DWORD
    STDMETHOD   MultMatrix, DWORD
    STDMETHOD   MultMatrixLocal, DWORD
    STDMETHOD   RotateAxis, DWORD, DWORD
    STDMETHOD   RotateAxisLocal, DWORD, DWORD
    STDMETHOD   RotateYawPitchRoll, DWORD, DWORD, DWORD
    STDMETHOD   RotateYawPitchRollLocal, DWORD, DWORD, DWORD
    STDMETHOD   Scale, DWORD, DWORD, DWORD
    STDMETHOD   ScaleLocal, DWORD, DWORD, DWORD
    STDMETHOD   Translate, DWORD, DWORD, DWORD
    STDMETHOD   TranslateLocal, DWORD, DWORD, DWORD
    STDMETHOD   GetTop
ENDSTRUC

%DEFINE D3DX_PI          3.141592654
%DEFINE D3DX_1BYPI      0.318309886

%DEFINE D3DX_0          0.0
%DEFINE D3DX_1          1.0
%DEFINE D3DX_PIHALF     1.570796327
%DEFINE D3DX_1BYPIHALF  0.636619772
%DEFINE D3DX_PIQUARTER  0.785398164
%DEFINE D3DX_1BYPIQUARTER  1.273239545
%DEFINE D3DX_SQRT2         1.414213562
%DEFINE D3DX_1BYSQRT2      0.707106781
%DEFINE D3DX_SQRTPI        1.772453851
%DEFINE D3DX_1BYSQRTPI     1.564189583

STRUC D3DXVECTOR2

    .x           resd       1
    .y           resd       1

ENDSTRUC

STRUC D3DXVECTOR3

    .x           resd       1
    .y           resd       1
    .z           resd       1

ENDSTRUC

STRUC D3DXVECTOR4

    .x           resd       1
    .y           resd       1
    .z           resd       1
    .w           resd       1

ENDSTRUC

STRUC D3DXMATRIX

    .11         resd       1
    .12         resd       1
    .13         resd       1
    .14         resd       1
    .21         resd       1
    .22         resd       1
    .23         resd       1
    .24         resd       1
    .31         resd       1
    .32         resd       1
    .33         resd       1
    .34         resd       1
    .41         resd       1
    .42         resd       1
    .43         resd       1
    .44         resd       1

ENDSTRUC

STRUC D3DXPLANE

    .x           resd       1
    .y           resd       1
    .z           resd       1
    .w           resd       1

ENDSTRUC

STRUC D3DXCOLOR

    .r           resd       1
    .g           resd       1
    .b           resd       1
    .a           resd       1

ENDSTRUC

%include "dx\d3dx8math.inl"

%endif
