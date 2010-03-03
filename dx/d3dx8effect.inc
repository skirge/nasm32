%ifndef __D3DX8EFFECT__
%DEFINE __D3DX8EFFECT__

STRUC ID3DXTechnique

    INHERIT_IUnknown

    STDMETHOD   GetDevice, DWORD
    STDMETHOD   GetDesc, DWORD
    STDMETHOD   GetPassDesc, DWORD, DWORD
    STDMETHOD   IsParameterUsed, DWORD

    STDMETHOD   Validate
    STDMETHOD   Begin, DWORD
    STDMETHOD   Pass, DWORD
    STDMETHOD   End, DWORD
ENDSTRUC

STRUC ID3DXEffect

    INHERIT_IUnknown

    STDMETHOD   GetDevice, DWORD
    STDMETHOD   GetDesc, DWORD
    STDMETHOD   GetParameterDesc, DWORD, DWORD
    STDMETHOD   GetTechniqueDesc, DWORD, DWORD

    STDMETHOD   SetDWORD, DWORD, DWORD
    STDMETHOD   GetDWORD, DWORD, DWORD
    STDMETHOD   SetFloat, DWORD, DWORD
    STDMETHOD   GetFloat, DWORD, DWORD
    STDMETHOD   SetVector, DWORD, DWORD
    STDMETHOD   GetVector, DWORD, DWORD
    STDMETHOD   SetMatrix, DWORD, DWORD
    STDMETHOD   GetMatrix, DWORD, DWORD
    STDMETHOD   SetTexture, DWORD, DWORD
    STDMETHOD   GetTexture, DWORD, DWORD
    STDMETHOD   SetVertexShader, DWORD, DWORD
    STDMETHOD   GetVertexShader, DWORD, DWORD
    STDMETHOD   SetPixelShader, DWORD, DWORD
    STDMETHOD   GetPixelShader, DWORD, DWORD

    STDMETHOD   GetTechnique, DWORD, DWORD
    STDMETHOD   CloneEffect, DWORD, DWORD, DWORD
ENDSTRUC

D3DXPT_DWORD            equ      0
D3DXPT_FLOAT            equ      1
D3DXPT_VECTOR           equ      2
D3DXPT_MATRIX           equ      3
D3DXPT_TEXTURE          equ      4
D3DXPT_VERTEXSHADER     equ      5
D3DXPT_PIXELSHADER      equ      6
D3DXPT_CONSTANT         equ      7

STRUC D3DXEFFECT_DESC

  .Parameters            resd       1
  .Techniques            resd       1
  .Usage             resd       1

ENDSTRUC

STRUC D3DXPARAMETER_DESC

  .Name             resd           1
  .Type             resd    1

ENDSTRUC

STRUC D3DXTECHNIQUE_DESC

  .Name             resd       1
  .Passes           resd       1

ENDSTRUC

STRUC D3DXPASS_DESC

  .Name             resd       1

ENDSTRUC

%endif