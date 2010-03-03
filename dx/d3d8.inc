;;/*==========================================================================;
; *
; *
; *  File:   d3d8.h
; *  Content:    Direct3D include file
; *
; ****************************************************************************/

%IFNDEF __D3D8_INC_
%DEFINE _D3D8_INC_1

DIRECT3D_VERSION    EQU 0800h
D3D_SDK_VERSION     EQU 120

%include "dx\d3d8types.inc"
%include "dx\d3d8caps.inc"

STRUC IDirect3D8

    INHERIT_IUnknown

    STDMETHOD RegisterSoftwareDevice,:DWORD
    STDMETHOD GetAdapterCount
    STDMETHOD GetAdapterIdentifier,:DWORD,:DWORD,:DWORD
    STDMETHOD GetAdapterModeCount,:DWORD
    STDMETHOD EnumAdapterModes,:DWORD,:DWORD,:DWORD
    STDMETHOD GetAdapterDisplayMode,:DWORD,:DWORD
    STDMETHOD CheckDeviceType,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CheckDeviceFormat,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CheckDeviceMultiSampleType,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CheckDepthStencilMatch,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetDeviceCaps,:DWORD,:DWORD,:DWORD
    STDMETHOD GetAdapterMonitor,:DWORD
    STDMETHOD CreateDevice,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ENDSTRUC

STRUC IDirect3DDevice8

    INHERIT_IUnknown

    STDMETHOD TestCooperativeLevel
    STDMETHOD GetAvailableTextureMem
    STDMETHOD ResourceManagerDiscardBytes,:DWORD
    STDMETHOD GetDirect3D,:DWORD
    STDMETHOD GetDeviceCaps,:DWORD
    STDMETHOD GetDisplayMode,:DWORD
    STDMETHOD GetCreationParameters,:DWORD
    STDMETHOD SetCursorProperties,:DWORD,:DWORD,:DWORD
    STDMETHOD SetCursorPosition,:DWORD,:DWORD,:DWORD
    STDMETHOD ShowCursor,:DWORD
    STDMETHOD CreateAdditionalSwapChain,:DWORD,:DWORD
    STDMETHOD Reset,:DWORD
    STDMETHOD Present,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetBackBuffer,:DWORD,:DWORD,:DWORD
    STDMETHOD GetRasterStatus,:DWORD
    STDMETHOD SetGammaRamp,:DWORD,:DWORD
    STDMETHOD GetGammaRamp,:DWORD
    STDMETHOD CreateTexture,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateVolumeTexture,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateCubeTexture,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateVertexBuffer,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateIndexBuffer,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateRenderTarget,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateDepthStencilSurface,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateImageSurface,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CopyRects,:DWORD
    STDMETHOD UpdateTexture,:DWORD
    STDMETHOD GetFrontBuffer,:DWORD
    STDMETHOD SetRenderTarget,:DWORD ,:DWORD
    STDMETHOD GetRenderTarget,:DWORD
    STDMETHOD GetDepthStencilSurface,:DWORD
    STDMETHOD BeginScene
    STDMETHOD EndScene
    STDMETHOD Clear,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD SetTransform,:DWORD,:DWORD
    STDMETHOD GetTransform,:DWORD,:DWORD
    STDMETHOD MultiplyTransform,:DWORD,:DWORD
    STDMETHOD SetViewport,:DWORD
    STDMETHOD GetViewport,:DWORD
    STDMETHOD SetMaterial,:DWORD
    STDMETHOD GetMaterial,:DWORD
    STDMETHOD SetLight,:DWORD,:DWORD
    STDMETHOD GetLight,:DWORD,:DWORD
    STDMETHOD LightEnable,:DWORD,:DWORD
    STDMETHOD GetLightEnable,:DWORD,:DWORD
    STDMETHOD SetClipPlane,:DWORD,:DWORD
    STDMETHOD GetClipPlane,:DWORD,:DWORD
    STDMETHOD SetRenderState,:DWORD,:DWORD
    STDMETHOD GetRenderState,:DWORD,:DWORD
    STDMETHOD BeginStateBlock
    STDMETHOD EndStateBlock,:DWORD
    STDMETHOD ApplyStateBlock,:DWORD
    STDMETHOD CaptureStateBlock,:DWORD
    STDMETHOD DeleteStateBlock,:DWORD
    STDMETHOD CreateStateBlock,:DWORD,:DWORD
    STDMETHOD SetClipStatus,:DWORD
    STDMETHOD GetClipStatus,:DWORD
    STDMETHOD GetTexture,:DWORD,:DWORD
    STDMETHOD SetTexture,:DWORD,:DWORD
    STDMETHOD GetTextureStageState,:DWORD,:DWORD,:DWORD
    STDMETHOD SetTextureStageState,:DWORD,:DWORD,:DWORD
    STDMETHOD ValidateDevice,:DWORD
    STDMETHOD GetInfo,:DWORD,:DWORD,:DWORD
    STDMETHOD SetPaletteEntries,:DWORD,:DWORD
    STDMETHOD GetPaletteEntries,:DWORD,:DWORD
    STDMETHOD SetCurrentTexturePalette,:DWORD
    STDMETHOD GetCurrentTexturePalette,:DWORD
    STDMETHOD DrawPrimitive,:DWORD,:DWORD,:DWORD
    STDMETHOD DrawIndexedPrimitive,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD DrawPrimitiveUP,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD DrawIndexedPrimitiveUP,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

    STDMETHOD ProcessVertices,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD CreateVertexShader,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD SetVertexShader,:DWORD
    STDMETHOD GetVertexShader,:DWORD
    STDMETHOD DeleteVertexShader,:DWORD
    STDMETHOD SetVertexShaderConstant,:DWORD,:DWORD,:DWORD
    STDMETHOD GetVertexShaderConstant,:DWORD,:DWORD,:DWORD
    STDMETHOD GetVertexShaderDeclaration,:DWORD,:DWORD,:DWORD
    STDMETHOD GetVertexShaderFunction,:DWORD,:DWORD,:DWORD
    STDMETHOD SetStreamSource,:DWORD,:DWORD,:DWORD
    STDMETHOD GetStreamSource,:DWORD,:DWORD,:DWORD
    STDMETHOD SetIndices,:DWORD,:DWORD
    STDMETHOD GetIndices,:DWORD,:DWORD
    STDMETHOD CreatePixelShader,:DWORD,:DWORD
    STDMETHOD SetPixelShader,:DWORD
    STDMETHOD GetPixelShader,:DWORD
    STDMETHOD DeletePixelShader,:DWORD
    STDMETHOD SetPixelShaderConstant,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPixelShaderConstant,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPixelShaderFunction,:DWORD,:DWORD,:DWORD
    STDMETHOD DrawRectPatch,:DWORD,:DWORD,:DWORD
    STDMETHOD DrawTriPatch,:DWORD,:DWORD,:DWORD
    STDMETHOD DeletePatch,:DWORD
ENDSTRUC
STRUC IDirect3DSwapChain8

    INHERIT_IUnknown

    STDMETHOD Present,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetBackBuffer,:DWORD,:DWORD,:DWORD
ENDSTRUC
STRUC IDirect3DResource8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
ENDSTRUC
STRUC IDirect3DBaseTexture8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD SetLOD,:DWORD
    STDMETHOD GetLOD
    STDMETHOD GetLevelCount
ENDSTRUC
STRUC IDirect3DTexture8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD SetLOD,:DWORD
    STDMETHOD GetLOD
    STDMETHOD GetLevelCount
    STDMETHOD GetLevelDesc,:DWORD,:DWORD
    STDMETHOD GetSurfaceLevel,:DWORD,:DWORD
    STDMETHOD LockRect,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD UnlockRect,:DWORD
    STDMETHOD AddDirtyRect,:DWORD
ENDSTRUC
STRUC IDirect3DVolumeTexture8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD SetLOD,:DWORD
    STDMETHOD GetLOD
    STDMETHOD GetLevelCount
    STDMETHOD GetLevelDesc,:DWORD,:DWORD
    STDMETHOD GetVolumeLevel,:DWORD,:DWORD
    STDMETHOD LockBox,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD UnlockBox,:DWORD
    STDMETHOD AddDirtyBox,:DWORD
ENDSTRUC
STRUC IDirect3DCubeTexture8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD SetLOD,:DWORD
    STDMETHOD GetLOD
    STDMETHOD GetLevelCount
    STDMETHOD GetLevelDesc,:DWORD,:DWORD
    STDMETHOD GetCubeMapSurface,:DWORD,:DWORD,:DWORD
    STDMETHOD LockRect,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD UnlockRect,:DWORD,:DWORD
    STDMETHOD AddDirtyRect,:DWORD,:DWORD
ENDSTRUC
STRUC IDirect3DVertexBuffer8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD Lock,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD Unlock
    STDMETHOD GetDesc,:DWORD
ENDSTRUC
STRUC IDirect3DIndexBuffer8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD SetPriority,:DWORD
    STDMETHOD GetPriority
    STDMETHOD PreLoad
    STDMETHOD GetType
    STDMETHOD Lock,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD Unlock
    STDMETHOD GetDesc,:DWORD
ENDSTRUC
STRUC IDirect3DSurface8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD GetContainer,:DWORD,:DWORD
    STDMETHOD GetDesc,:DWORD
    STDMETHOD LockRect,:DWORD,:DWORD,:DWORD
    STDMETHOD UnlockRect
ENDSTRUC
STRUC IDirect3DVolume8

    INHERIT_IUnknown

    STDMETHOD GetDevice,:DWORD
    STDMETHOD SetPrivateData,:DWORD,:DWORD,:DWORD,:DWORD
    STDMETHOD GetPrivateData,:DWORD,:DWORD,:DWORD
    STDMETHOD FreePrivateData,:DWORD
    STDMETHOD GetContainer,:DWORD,:DWORD
    STDMETHOD GetDesc,:DWORD
    STDMETHOD LockBox,:DWORD,:DWORD,:DWORD
    STDMETHOD UnlockBox
ENDSTRUC
D3DSPD_IUNKNOWN                         EQU         01h

D3DCURRENT_DISPLAY_MODE                 EQU         0EFFFFFh

D3DCREATE_FPU_PRESERVE                  EQU         02h
D3DCREATE_MULTITHREADED                 EQU         04h

D3DCREATE_PUREDEVICE                    EQU         010h
D3DCREATE_SOFTWARE_VERTEXPROCESSING     EQU         020h
D3DCREATE_HARDWARE_VERTEXPROCESSING     EQU         040h
D3DCREATE_MIXED_VERTEXPROCESSING        EQU         080h

D3DADAPTER_DEFAULT                      EQU         0

D3DENUM_NO_WHQL_LEVEL                   EQU         02h

D3DPRESENT_BACK_BUFFERS_MAX             EQU         3

D3DSGR_NO_CALIBRATION                   EQU         00h
D3DSGR_CALIBRATE                        EQU         01h

D3DCURSOR_IMMEDIATE_UPDATE              EQU         01h

_FACD3D                                 EQU         0876h

%MACRO MAKE_D3DHRESULT 2
 MAKE_HRESULT %1,1,_FACD3D,%2
%ENDMACRO

D3D_OK                                  EQU         0

MAKE_D3DHRESULT    D3DERR_WRONGTEXTUREFORMAT               ,2072
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDCOLOROPERATION        ,2073
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDCOLORARG              ,2074
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDALPHAOPERATION        ,2075
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDALPHAARG              ,2076
MAKE_D3DHRESULT    D3DERR_TOOMANYOPERATIONS                ,2077
MAKE_D3DHRESULT    D3DERR_CONFLICTINGTEXTUREFILTER         ,2078
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDFACTORVALUE           ,2079
MAKE_D3DHRESULT    D3DERR_CONFLICTINGRENDERSTATE           ,2081
MAKE_D3DHRESULT    D3DERR_UNSUPPORTEDTEXTUREFILTER         ,2082
MAKE_D3DHRESULT    D3DERR_CONFLICTINGTEXTUREPALETTE        ,2086
MAKE_D3DHRESULT    D3DERR_DRIVERINTERNALERROR              ,2087

MAKE_D3DHRESULT    D3DERR_NOTFOUND                         ,2150
MAKE_D3DHRESULT    D3DERR_MOREDATA                         ,2151
MAKE_D3DHRESULT    D3DERR_DEVICELOST                       ,2152
MAKE_D3DHRESULT    D3DERR_DEVICENOTRESET                   ,2153
MAKE_D3DHRESULT    D3DERR_NOTAVAILABLE                     ,2154
MAKE_D3DHRESULT    D3DERR_OUTOFVIDEOMEMORY                 ,380
MAKE_D3DHRESULT    D3DERR_INVALIDDEVICE                    ,2155
MAKE_D3DHRESULT    D3DERR_INVALIDCALL                      ,2156
MAKE_D3DHRESULT    D3DERR_DRIVERINVALIDCALL                ,2157

%endif

