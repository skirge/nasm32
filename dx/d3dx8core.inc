%ifndef __D3DX8CORE__

%DEFINE __D3DX8CORE__

STRUC ID3DXBuffer

    INHERIT_IUnknown

    STDMETHOD   GetBufferPointer
    STDMETHOD   GetBufferSize
ENDSTRUC


STRUC ID3DXFont

    INHERIT_IUnknown

    STDMETHOD   GetDevice
    STDMETHOD   GetLogFont

    STDMETHOD   Begin

    STDMETHOD   DrawTextA
    STDMETHOD   DrawTextW

    STDMETHOD   End
ENDSTRUC

STRUC ID3DXSprite

    INHERIT_IUnknown

    STDMETHOD   GetDevice

    STDMETHOD   Begin

    STDMETHOD   Draw
    STDMETHOD   DrawTransform

    STDMETHOD   End
ENDSTRUC

STRUC ID3DXRenderToSurface

    INHERIT_IUnknown

    STDMETHOD   GetDevice
    STDMETHOD   GetDesc

    STDMETHOD   BeginScene
    STDMETHOD   EndScene
ENDSTRUC

STRUC ID3DXRenderToEnvMap

    INHERIT_IUnknown

    STDMETHOD   GetDevice
    STDMETHOD   GetDesc

    STDMETHOD   BeginCube
    STDMETHOD   BeginSphere
    STDMETHOD   BeginHemiSphere
    STDMETHOD   BeginParabolic

    STDMETHOD   Face
    STDMETHOD   End
ENDSTRUC

D3DXASM_DEBUG               equ     1
D3DXASM_SKIPVALIDATION      equ     2

STRUC D3DXRTS_DESC
    .Width          resd           1
    .Height         resd       1
    .Format         resd       1
    .DepthStencil   resd       1
    .DepthStencilFormat resd 1
ENDSTRUC

STRUC D3DXRTE_DESC
    .Size           resd       1
    .Format         resd   1
    .DepthStencil   resd       1
    .DepthStencilFormat resd   1
ENDSTRUC

%endif