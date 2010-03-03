%ifndef __D3DX8TEX__
%DEFINE __D3DX8TEX__

D3DX_FILTER_NONE        equ 1
D3DX_FILTER_POINT       equ 2
D3DX_FILTER_LINEAR      equ 3
D3DX_FILTER_TRIANGLE        equ 4
D3DX_FILTER_BOX         equ 5

D3DX_FILTER_MIRROR_U        equ 010000h
D3DX_FILTER_MIRROR_V        equ 020000h
D3DX_FILTER_MIRROR_W        equ 040000h
D3DX_FILTER_MIRROR      equ 070000h
D3DX_FILTER_DITHER      equ 080000h


STRUC D3DXIMAGE_INFO
  .Width            resd       1
  .Height           resd       1
  .Depth            resd       1
  .MipLevels        resd       1
  .Format           resd       1
ENDSTRUC

%endif
