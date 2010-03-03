;/*==========================================================================;
; *
; *  Copyright (C) 1995-2000 Microsoft Corporation.  All Rights Reserved.
; *
; *  File:       d3d8caps.h
; *  Content:    Direct3D capabilities include file
; *
; ***************************************************************************/

%IFNDEF _D3D8CAPS_INC_
%DEFINE _D3D8CAPS_INC_

STRUC D3DCAPS8

    .DeviceType        resd    1
    .AdapterOrdinal        resd    1

    .Caps      resd    1
    .Caps2                       resd  1
    .Caps3     resd    1
    .PresentationIntervals     resd    1

    .CursorCaps        resd    1

    .DevCaps       resd    1

    .PrimitiveMiscCaps     resd    1
    .RasterCaps        resd    1
    .ZCmpCaps      resd    1
    .SrcBlendCaps      resd    1
    .DestBlendCaps     resd    1
    .AlphaCmpCaps      resd    1
    .ShadeCaps     resd    1
    .TextureCaps       resd    1
    .TextureFilterCaps     resd    1
    .CubeTextureFilterCaps     resd    1
    .VolumeTextureFilterCaps       resd    1
    .TextureAddressCaps        resd    1
    .VolumeTextureAddressCaps      resd    1

    .LineCaps      resd    1

    .MaxTextureWidth       resd    1
    .MaxTextureHeight      resd    1
    .MaxVolumeExtent       resd    1

    .MaxTextureRepeat      resd    1
    .MaxTextureAspectRatio     resd    1
    .MaxAnisotropy     resd    1
    .MaxVertexW        resd    1

    .GuardBandLeft     resd    1
    .GuardBandTop      resd    1
    .GuardBandRight        resd    1
    .GuardBandBottom       resd    1

    .ExtentsAdjust     resd    1
    .StencilCaps       resd    1

    .FVFCaps       resd    1
    .TextureOpCaps     resd    1
    .MaxTextureBlendStages     resd    1
    .MaxSimultaneousTextures       resd    1

    .VertexProcessingCaps      resd    1
    .MaxActiveLights       resd    1
    .MaxUserClipPlanes     resd    1
    .MaxVertexBlendMatrices        resd    1
    .MaxVertexBlendMatrixIndex     resd    1

    .MaxPointSize      resd    1

    .MaxPrimitiveCount     resd    1
    .MaxVertexIndex        resd    1
    .MaxStreams        resd    1
    .MaxStreamStride       resd    1

    .VertexShaderVersion       resd    1
    .MaxVertexShaderConst      resd    1

    .PixelShaderVersion        resd    1
    .MaxPixelShaderValue       resd    1

ENDSTRUC

D3DCAPS_READ_SCANLINE               EQU     020000h

D3DCAPS2_NO2DDURING3DSCENE          EQU     2
D3DCAPS2_FULLSCREENGAMMA            EQU     20000
D3DCAPS2_CANRENDERWINDOWED          EQU     80000
D3DCAPS2_CANCALIBRATEGAMMA          EQU     100000
D3DCAPS2_RESERVED                   EQU     2000000

D3DCAPS3_RESERVED                   EQU     08000001h

D3DPRESENT_INTERVAL_DEFAULT         EQU     0
D3DPRESENT_INTERVAL_ONE             EQU     1
D3DPRESENT_INTERVAL_TWO             EQU     2
D3DPRESENT_INTERVAL_THREE           EQU     4
D3DPRESENT_INTERVAL_FOUR            EQU     8
D3DPRESENT_INTERVAL_IMMEDIATE       EQU     080000000h

D3DCURSORCAPS_COLOR                 EQU     1

D3DCURSORCAPS_LOWRES                EQU     2

D3DDEVCAPS_EXECUTESYSTEMMEMORY      EQU     10h
D3DDEVCAPS_EXECUTEVIDEOMEMORY       EQU     20
D3DDEVCAPS_TLVERTEXSYSTEMMEMORY     EQU     40h
D3DDEVCAPS_TLVERTEXVIDEOMEMORY      EQU     80h
D3DDEVCAPS_TEXTURESYSTEMMEMORY      EQU     100h
D3DDEVCAPS_TEXTUREVIDEOMEMORY       EQU     200
D3DDEVCAPS_DRAWPRIMTLVERTEX         EQU     400
D3DDEVCAPS_CANRENDERAFTERFLIP       EQU     800
D3DDEVCAPS_TEXTURENONLOCALVIDMEM    EQU     1000h
D3DDEVCAPS_DRAWPRIMITIVES2          EQU     2000
D3DDEVCAPS_SEPARATETEXTUREMEMORIES  EQU     4000h
D3DDEVCAPS_DRAWPRIMITIVES2EX        EQU     8000
D3DDEVCAPS_HWTRANSFORMANDLIGHT      EQU     10000h
D3DDEVCAPS_CANBLTSYSTONONLOCAL      EQU     20000h
D3DDEVCAPS_HWRASTERIZATION          EQU     80000
D3DDEVCAPS_PUREDEVICE               EQU     100000
D3DDEVCAPS_QUINTICRTPATCHES         EQU     200000
D3DDEVCAPS_RTPATCHES                EQU     400000
D3DDEVCAPS_RTPATCHHANDLEZERO        EQU     800000
D3DDEVCAPS_NPATCHES                 EQU     1000000

D3DPMISCCAPS_MASKZ                  EQU     2
D3DPMISCCAPS_LINEPATTERNREP         EQU     4
D3DPMISCCAPS_CULLNONE               EQU     10
D3DPMISCCAPS_CULLCW                 EQU     20
D3DPMISCCAPS_CULLCCW                EQU     40
D3DPMISCCAPS_COLORWRITEENABLE       EQU     80
D3DPMISCCAPS_CLIPPLANESCALEDPOINTS  EQU     100h
D3DPMISCCAPS_CLIPTLVERTS            EQU     200
D3DPMISCCAPS_TSSARGTEMP             EQU     400
D3DPMISCCAPS_BLENDOP                EQU     800

D3DLINECAPS_TEXTURE                 EQU     1
D3DLINECAPS_ZTEST                   EQU     2
D3DLINECAPS_BLEND                   EQU     4
D3DLINECAPS_ALPHACMP                EQU     8
D3DLINECAPS_FOG                     EQU     10

D3DPRASTERCAPS_DITHER                   EQU     1
D3DPRASTERCAPS_PAT                      EQU     8
D3DPRASTERCAPS_ZTEST                    EQU     10
D3DPRASTERCAPS_FOGVERTEX                EQU     80
D3DPRASTERCAPS_FOGTABLE                 EQU     100
D3DPRASTERCAPS_ANTIALIASEDGES           EQU     1000
D3DPRASTERCAPS_MIPMAPLODBIAS            EQU     2000
D3DPRASTERCAPS_ZBIAS                    EQU     4000
D3DPRASTERCAPS_ZBUFFERLESSHSR           EQU     8000
D3DPRASTERCAPS_FOGRANGE                 EQU     10000
D3DPRASTERCAPS_ANISOTROPY               EQU     20000
D3DPRASTERCAPS_WBUFFER                  EQU     40000
D3DPRASTERCAPS_WFOG                     EQU     100000
D3DPRASTERCAPS_ZFOG                     EQU     200000
D3DPRASTERCAPS_COLORPERSPECTIVE         EQU     400000h
D3DPRASTERCAPS_STRETCHBLTMULTISAMPLE    EQU     800000h

D3DPCMPCAPS_NEVER                       EQU     1
D3DPCMPCAPS_LESS                        EQU     2
D3DPCMPCAPS_EQUAL                       EQU     4
D3DPCMPCAPS_LESSEQUAL                   EQU     8
D3DPCMPCAPS_GREATER                     EQU     10
D3DPCMPCAPS_NOTEQUAL                    EQU     20
D3DPCMPCAPS_GREATEREQUAL                EQU     40
D3DPCMPCAPS_ALWAYS                      EQU     80

D3DPBLENDCAPS_ZERO                      EQU     1
D3DPBLENDCAPS_ONE                       EQU     2
D3DPBLENDCAPS_SRCCOLOR                  EQU     4
D3DPBLENDCAPS_INVSRCCOLOR               EQU     8
D3DPBLENDCAPS_SRCALPHA                  EQU     10
D3DPBLENDCAPS_INVSRCALPHA               EQU     20
D3DPBLENDCAPS_DESTALPHA                 EQU     40
D3DPBLENDCAPS_INVDESTALPHA              EQU     80
D3DPBLENDCAPS_DESTCOLOR                 EQU     100
D3DPBLENDCAPS_INVDESTCOLOR              EQU     200
D3DPBLENDCAPS_SRCALPHASAT               EQU     400
D3DPBLENDCAPS_BOTHSRCALPHA              EQU     800
D3DPBLENDCAPS_BOTHINVSRCALPHA           EQU     1000

D3DPSHADECAPS_COLORGOURAUDRGB           EQU     8
D3DPSHADECAPS_SPECULARGOURAUDRGB        EQU     200
D3DPSHADECAPS_ALPHAGOURAUDBLEND         EQU     400
D3DPSHADECAPS_FOGGOURAUD                EQU     80000

D3DPTEXTURECAPS_PERSPECTIVE             EQU     1
D3DPTEXTURECAPS_POW2                    EQU     2
D3DPTEXTURECAPS_ALPHA                   EQU     4
D3DPTEXTURECAPS_SQUAREONLY              EQU     20
D3DPTEXTURECAPS_TEXREPEATNOTSCALEDBYSIZE    EQU     40h
D3DPTEXTURECAPS_ALPHAPALETTE            EQU     80

D3DPTEXTURECAPS_NONPOW2CONDITIONAL      EQU     100h
D3DPTEXTURECAPS_PROJECTED               EQU     400
D3DPTEXTURECAPS_CUBEMAP                 EQU     800
D3DPTEXTURECAPS_VOLUMEMAP               EQU     2000
D3DPTEXTURECAPS_MIPMAP                  EQU     4000
D3DPTEXTURECAPS_MIPVOLUMEMAP            EQU     8000
D3DPTEXTURECAPS_MIPCUBEMAP              EQU     10000
D3DPTEXTURECAPS_CUBEMAP_POW2            EQU     20000
D3DPTEXTURECAPS_VOLUMEMAP_POW2          EQU     40000

D3DPTFILTERCAPS_MINFPOINT               EQU     100
D3DPTFILTERCAPS_MINFLINEAR              EQU     200
D3DPTFILTERCAPS_MINFANISOTROPIC         EQU     400
D3DPTFILTERCAPS_MIPFPOINT               EQU     10000
D3DPTFILTERCAPS_MIPFLINEAR              EQU     20000
D3DPTFILTERCAPS_MAGFPOINT               EQU     1000000
D3DPTFILTERCAPS_MAGFLINEAR              EQU     2000000
D3DPTFILTERCAPS_MAGFANISOTROPIC         EQU     4000000
D3DPTFILTERCAPS_MAGFAFLATCUBIC          EQU     8000000
D3DPTFILTERCAPS_MAGFGAUSSIANCUBIC       EQU     10000000h

D3DPTADDRESSCAPS_WRAP                   EQU     1
D3DPTADDRESSCAPS_MIRROR                 EQU     2
D3DPTADDRESSCAPS_CLAMP                  EQU     4
D3DPTADDRESSCAPS_BORDER                 EQU     8
D3DPTADDRESSCAPS_INDEPENDENTUV          EQU     10h
D3DPTADDRESSCAPS_MIRRORONCE             EQU     20

D3DSTENCILCAPS_KEEP                     EQU     1
D3DSTENCILCAPS_ZERO                     EQU     2
D3DSTENCILCAPS_REPLACE                  EQU     4
D3DSTENCILCAPS_INCRSAT                  EQU     8
D3DSTENCILCAPS_DECRSAT                  EQU     10
D3DSTENCILCAPS_INVERT                   EQU     20
D3DSTENCILCAPS_INCR                     EQU     40
D3DSTENCILCAPS_DECR                     EQU     80

D3DTEXOPCAPS_DISABLE                    EQU     1
D3DTEXOPCAPS_SELECTARG1                 EQU     2
D3DTEXOPCAPS_SELECTARG2                 EQU     4
D3DTEXOPCAPS_MODULATE                   EQU     8
D3DTEXOPCAPS_MODULATE2X                 EQU     10
D3DTEXOPCAPS_MODULATE4X                 EQU     20
D3DTEXOPCAPS_ADD                        EQU     40
D3DTEXOPCAPS_ADDSIGNED                  EQU     80
D3DTEXOPCAPS_ADDSIGNED2X                EQU     100
D3DTEXOPCAPS_SUBTRACT                   EQU     200
D3DTEXOPCAPS_ADDSMOOTH                  EQU     400
D3DTEXOPCAPS_BLENDDIFFUSEALPHA          EQU     800
D3DTEXOPCAPS_BLENDTEXTUREALPHA          EQU     1000
D3DTEXOPCAPS_BLENDFACTORALPHA           EQU     2000
D3DTEXOPCAPS_BLENDTEXTUREALPHAPM        EQU     4000
D3DTEXOPCAPS_BLENDCURRENTALPHA          EQU     8000
D3DTEXOPCAPS_PREMODULATE                EQU     10000
D3DTEXOPCAPS_MODULATEALPHA_ADDCOLOR     EQU     20000
D3DTEXOPCAPS_MODULATECOLOR_ADDALPHA     EQU     40000
D3DTEXOPCAPS_MODULATEINVALPHA_ADDCOLOR  EQU     80000h
D3DTEXOPCAPS_MODULATEINVCOLOR_ADDALPHA  EQU     100000h
D3DTEXOPCAPS_BUMPENVMAP                 EQU     200000
D3DTEXOPCAPS_BUMPENVMAPLUMINANCE        EQU     400000
D3DTEXOPCAPS_DOTPRODUCT3                EQU     800000
D3DTEXOPCAPS_MULTIPLYADD                EQU     1000000
D3DTEXOPCAPS_LERP                       EQU     2000000

D3DFVFCAPS_TEXCOORDCOUNTMASK            EQU     0ffffh
D3DFVFCAPS_DONOTSTRIPELEMENTS           EQU     80000
D3DFVFCAPS_PSIZE                        EQU     100000

D3DVTXPCAPS_TEXGEN                      EQU     1
D3DVTXPCAPS_MATERIALSOURCE7             EQU     2
D3DVTXPCAPS_DIRECTIONALLIGHTS           EQU     8
D3DVTXPCAPS_POSITIONALLIGHTS            EQU     10
D3DVTXPCAPS_LOCALVIEWER                 EQU     20
D3DVTXPCAPS_TWEENING                    EQU     40
D3DVTXPCAPS_NO_VSDT_UBYTE4              EQU     80

%ENDIF

