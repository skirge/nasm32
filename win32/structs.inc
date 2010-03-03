STRUC WIN32_FIND_DATA
	.dwFileAttributes					resd	1
	.ftCreationTime					    resd	2
	.ftLastAccessTime					resd	2
	.ftLastWriteTime					resd	2
	.nFileSizeHigh					    resd	1
	.nFileSizeLow					    resd	1
	.dwReserved0					    resd	1
	.dwReserved1					    resd	1
	.cFileName					        resb	MAX_PATH
	.cAlternateFileName					resb	14
ENDSTRUC

struc POINT
   	.x					                resd	1
   	.y					                resd	1
ENDSTRUC

struc RECT
   	.left					            resd	1
   	.top					            resd	1
   	.right					            resd	1
   	.bottom					            resd	1
ENDSTRUC

struc WNDCLASS
   	.style					            resd	1
   	.lpfnWndProc					    resd	1
   	.cbClsExtra					        resd	1
   	.cbWndExtra					        resd	1
   	.hInstance					        resd	1
   	.hIcon					            resd	1
   	.hCursor					        resd	1
   	.hbrBackground					    resd	1
   	.lpszMenuName					    resd	1
   	.lpszClassName					    resd	1
ENDSTRUC

struc WNDCLASSEX
   	.cbSize					            resd	1
   	.style					            resd	1
   	.lpfnWndProc					    resd	1
   	.cbClsExtra					        resd	1
   	.cbWndExtra					        resd	1
   	.hInstance					        resd	1
   	.hIcon					            resd	1
   	.hCursor					        resd	1
   	.hbrBackground					    resd	1
   	.lpszMenuName					    resd	1
   	.lpszClassName					    resd	1
   	.hIconSm					        resd	1
ENDSTRUC

struc CREATESTRUCT
   	.lpCreateParams					    resd	1
   	.hInstance					        resd	1
   	.hMenu					            resd	1
   	.hwndParent					        resd	1
   	.cy					                resd	1
   	.cx					                resd	1
   	.y					                resd	1
   	.x					                resd	1
   	.style					            resd	1
   	.lpszName					        resd	1
   	.lpszClass					        resd	1
   	.dwExStyle					        resd	1
ENDSTRUC

struc CLIENTCREATESTRUCT
   	.hWindowMenu					    resd	1
   	.idFirstChild					    resd	1
ENDSTRUC

struc MDICREATESTRUCT
   	.szClass					        resd	1
   	.szTitle					        resd	1
   	.hOwner					            resd	1
   	.x					                resd	1
   	.y					                resd	1
   	.cx					                resd	1
   	.cy					                resd	1
   	.style					            resd	1
   	.lParam					            resd	1
ENDSTRUC

struc SCROLLINFO
   	.cbSize					            resd	1
   	.fMask					            resd	1
   	.nMin					            resd	1
   	.nMax					            resd	1
   	.nPage					            resd	1
   	.nPos					            resd	1
   	.nTrackPos					        resd	1
ENDSTRUC

struc MSG
   	.hwnd					            resd	1
   	.message					        resd	1
   	.wParam					            resd	1
   	.lParam					            resd	1
   	.time					            resd	1
   	.pt					                resd	1
ENDSTRUC

struc MINMAXINFO
   	.ptReserved.x					    resd	1
   	.ptReserved.y					    resd	1
   	.ptMaxSize.x					    resd	1
   	.ptMaxSize.y					    resd	1
   	.ptMaxPosition.x					resd	1
   	.ptMaxPosition.y					resd	1
   	.ptMinTrackSize.x					resd	1
   	.ptMinTrackSize.y					resd	1
   	.ptMaxTrackSize.x					resd	1
   	.ptMaxTracksize.y					resd	1
ENDSTRUC

struc WINDOWPLACEMENT
   	.length					            resd	1
   	.flags					            resd	1
   	.showCmd					        resd	1
   	.ptMinPosition.x					resd	1
   	.ptMinPosition.y					resd	1
   	.ptMaxPosition.x					resd	1
   	.ptMaxPosition.y					resd	1
   	.rcNormalPosition.left				resd	1
   	.rcNormalPosition.top				resd	1
   	.rcNormalPosition.right				resd	1
   	.rcNormalPosition.bottom			resd	1
ENDSTRUC

struc WINDOWPOS
   	.hwnd					            resd	1
   	.hwndInsertAfter					resd	1
   	.x					                resd	1
   	.y					                resd	1
   	.cx					                resd	1
   	.cy					                resd	1
   	.flags					            resd	1
ENDSTRUC

struc NMHDR
   	.hwndFrom					        resd	1
   	.idFrom					            resd	1
   	.code					            resd	1
ENDSTRUC

struc COPYDATASTRUCT
   	.dwData					            resd	1
   	.cbData					            resd	1
   	.lpData					            resd	1
ENDSTRUC

struc ACCEL
    .fVirt                              resw 1
    .key                                resw 1
    .cmd                                resw 1
ENDSTRUC

struc PAINTSTRUCT
   	.hdc					            resd	1
   	.fErase					            resd	1
   	.rcPaint.left					    resd	1
   	.rcPaint.top					    resd	1
   	.rcPaint.right					    resd	1
   	.rcPaint.bottom					    resd	1
   	.fRestore					        resd	1
   	.fIncUpdate					        resd	1
   	.rgbReserved					    resb	32
ENDSTRUC

struc DRAWTEXTPARAMS
   	.cbSize					            resd	1
   	.iTabLength					        resd	1
   	.iLeftMargin					    resd	1
   	.iRightMargin					    resd	1
   	.uiLengthDrawn					    resd	1
ENDSTRUC

struc DRAWITEMSTRUCT
   	.CtlType					        resd	1
   	.CtlID					            resd	1
   	.itemID					            resd	1
   	.itemAction					        resd	1
   	.itemState					        resd	1
   	.hwndItem					        resd	1
   	.hDC					            resd	1
   	.rcItem.left					    resd	1
   	.rcItem.top					        resd	1
   	.rcItem.right					    resd	1
   	.rcItem.bottom					    resd	1
   	.itemData					        resd	1
ENDSTRUC

STRUC MSGBOXPARAMS
	.cbSize					            resd	1
	.hwndOwner					        resd	1
	.hInstance					        resd	1
	.lpszText					        resd	1
	.lpszCaption				    	resd	1
	.dwStyle					        resd	1
	.lpszIcon					        resd	1
	.dwContextHelpId					resd	1
    .lpfnMsgBoxCallback                 resd	1
	.dwLanguageId					    resd	1
ENDSTRUC

struc PROPSHEETPAGE

   	.dwSize					resd	1
   	.dwFlags					resd	1
   	.hInstance					resd	1
   	.pszTemplate					resd	1
   	.pszIcon					resd	1
   	.pszTitle					resd	1
   	.pfnDlgProc					resd	1
   	.lParam					resd	1
   	.pfnCallback					resd	1
   	.pcRefParent					resd	1
ENDSTRUC

struc PROPSHEETHEADER

   	.dwSize					resd	1
   	.dwFlags					resd	1
   	.hwndParent					resd	1
   	.hInstance					resd	1
   	.pszIcon					resd	1
   	.pszCaption					resd	1
   	.nPages					resd	1
   	.pStartPage					resd	1
ENDSTRUC

struc IMAGEINFO

   	.hbmImage					resd	1
   	.hbmMask					resd	1
   	.Unused1					resd	1
   	.Unused2					resd	1
   	.rcImage					resd	1
ENDSTRUC

struc HDITEM

   	.mask					resd	1
   	.cxy					resd	1
   	.pszText					resd	1
   	.hbm					resd	1
   	.cchTextMax					resd	1
   	.fmt					resd	1
   	.lParam					resd	1
ENDSTRUC

struc HDLAYOUT

   	.prc					resd	1
   	.pwpos					resd	1
ENDSTRUC

struc HDHITTESTINFO

   	.pt.x					resd	1
   	.pt.y					resd	1
   	.flags					resd	1
   	.iItem					resd	1
ENDSTRUC

struc HDNOTIFY

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iItem					resd	1
   	.iButton					resd	1
   	.pitem					resd	1
ENDSTRUC

struc TBBUTTON

   	.iBitmap					resd	1
   	.idCommand					resd	1
   	.fsState					resb	1
   	.fsStyle					resb	1
   	.dwPad					resw	1
   	.dwData					resd	1
   	.iString					resd	1
ENDSTRUC

struc COLORMAP

   	.from					resd	1
   	.to					resd	1
ENDSTRUC

struc TBADDBITMAP

   	.hInst					resd	1
   	.nID					resd	1
ENDSTRUC

struc TBSAVEPARAMS

   	.hkr					resd	1
   	.pszSubKey					resd	1
   	.pszValueName					resd	1
ENDSTRUC

struc TBREPLACEBITMAP

   	.hInstOld					resd	1
   	.nIDOld					resd	1
   	.hInstNew					resd	1
   	.nIDNew					resd	1
   	.nButtons					resd	1
ENDSTRUC

struc NMTOOLBAR

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iItem					resd	1
   	.tbButton.iBitmap					resd	1
   	.tbButton.idCommand					resd	1
   	.tbButton.fsState					resb	1
   	.tbButton.fsStyle					resb	1
   	.tbButton.dwData					resd	1
   	.tbButton.iString					resd	1
   	.cchText					resd	1
   	.pszText					resd	1
ENDSTRUC

struc REBARINFO

   	.cbSize					resd	1
   	.fMask					resd	1
   	.himl					resd	1
ENDSTRUC

struc REBARBANDINFO

   	.cbSize					resd	1
   	.fMask					resd	1
   	.fStyle					resd	1
   	.clrFore					resd	1
   	.clrBack					resd	1
   	.lpText					resd	1
   	.cch					resd	1
   	.iImage					resd	1
   	.hwndChild					resd	1
   	.cxMinChild					resd	1
   	.cyMinChild					resd	1
   	.cx					resd	1
   	.hbmBack					resd	1
   	.wID					resd	1
ENDSTRUC

struc TOOLINFO

   	.cbSize					resd	1
   	.uFlags					resd	1
   	.hwnd					resd	1
   	.uId					resd	1
   	.Rect.left					resd	1
   	.Rect.top					resd	1
   	.Rect.right					resd	1
   	.Rect.bottom					resd	1
   	.hInst					resd	1
   	.lpszText					resd	1
ENDSTRUC

struc TTHITTESTINFO

   	.hwnd					resd	1
   	.pt.x					resd	1
   	.pt.y					resd	1
   	.ti.cbSize					resd	1
   	.ti.uFlags					resd	1
   	.ti.hwnd					resd	1
   	.ti.uId					resd	1
   	.ti.Rect.left					resd	1
   	.ti.Rect.top					resd	1
   	.ti.Rect.right					resd	1
   	.ti.Rect.bottom					resd	1
   	.hInst					resd	1
   	.lpszText					resd	1
ENDSTRUC

struc TOOLTOPTEXT

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.lpszText					resd	1
   	.szText					resb	80
   	.hinst					resd	1
   	.uFlags					resd	1
ENDSTRUC

struc UDACCEL

   	.nSec					resd	1
   	.nInc					resd	1
ENDSTRUC

struc NMUPDOWN

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iPos					resd	1
   	.iDelta					resd	1
ENDSTRUC

struc LV_ITEM
   	.mask					resd	1
   	.iItem					resd	1
   	.iSubItem					resd	1
   	.state					resd	1
   	.stateMask					resd	1
   	.pszText					resd	1
   	.cchTextMax					resd	1
   	.iImage					resd	1
   	.lParam					resd	1
   	.iIndent					resd	1
   	.iGroupId					resd	1
   	.cColumns					resd	1
   	.puColumns					resd	1
ENDSTRUC

struc LV_FINDINFO

   	.flags					resd	1
   	.psz					resd	1
   	.lParam					resd	1
   	.pt.x					resd	1
   	.pt.y					resd	1
   	.vkDirection					resd	1
ENDSTRUC

struc LV_HITTESTINFO

   	.pt.x					resd	1
   	.pt.y					resd	1
   	.flags					resd	1
   	.iItem					resd	1
ENDSTRUC

struc LV_COLUMN

   	.mask					resd	1
   	.fmt					resd	1
   	.cx					resd	1
   	.pszText					resd	1
   	.cchTextMax					resd	1
   	.iSubItem					resd	1
ENDSTRUC

struc NMLISTVIEW

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iItem					resd	1
   	.iSubItem					resd	1
   	.uNewState					resd	1
   	.uOldState					resd	1
   	.uChanged					resd	1
   	.ptAction.x					resd	1
   	.ptAction.y					resd	1
   	.lParam					resd	1
ENDSTRUC

struc NMCACHEHINT

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iFrom					resd	1
   	.iTo					resd	1
ENDSTRUC

struc NMFINDITEM

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.iStart					resd	1
   	.lvfi.flags					resd	1
   	.lvfi.psz					resd	1
   	.lvfi.lParam					resd	1
   	.lvfi.pt.x					resd	1
   	.lvfi.pt.y					resd	1
   	.lvfi.vkDirection					resd	1
ENDSTRUC

struc LVDISPINFO

   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.item.mask					resd	1
   	.item.iItem					resd	1
   	.item.iSubItem					resd	1
   	.item.state					resd	1
   	.item.stateMask					resd	1
   	.item.pszText					resd	1
   	.item.cchTextMax					resd	1
   	.item.iImage					resd	1
   	.item.lParam					resd	1
ENDSTRUC

struc LVKEYDOWN
   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
    wVKey resw 1
    flags resd 1
ENDSTRUC

struc TVITEM

   	.mask					resd	1
   	.hItem					resd	1
   	.state					resd	1
   	.stateMask					resd	1
   	.pszText					resd	1
   	.cchTextMax					resd	1
   	.iImage					resd	1
   	.iSelectedImage					resd	1
   	.cChildren					resd	1
   	.lParam					resd	1
ENDSTRUC

struc TVINSERTSTRUCT

   	.hParent					resd	1
   	.hInsertAfter					resd	1
   	.item.mask					resd	1
   	.item.hItem					resd	1
   	.item.state					resd	1
   	.item.stateMask					resd	1
   	.item.pszText					resd	1
   	.item.cchTextMax					resd	1
   	.item.iImage					resd	1
   	.item.iSelectedImage					resd	1
   	.item.cChildren					resd	1
   	.item.lParam					resd	1
ENDSTRUC

struc TVHITTESTINFO

   	.pt.x					resd	1
   	.pt.y					resd	1
   	.flags					resd	1
   	.hItem					resd	1
ENDSTRUC

struc TVSORTCB

   	.hParent					resd	1
   	.lpfnCompare					resd	1
   	.lParam					resd	1
ENDSTRUC

struc NMTREEVIEW
   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.action					resd	1
   	.itemOld.mask					resd	1
   	.itemOld.hItem					resd	1
   	.itemOld.state					resd	1
   	.itemOld.stateMask					resd	1
   	.itemOld.pszText					resd	1
   	.itemOld.cchTextMax					resd	1
   	.itemOld.iImage					resd	1
   	.itemOld.iSelectedImage					resd	1
   	.itemOld.cChildren					resd	1
   	.itemOld.lParam					resd	1
   	.itemNew.mask					resd	1
   	.itemNew.hItem					resd	1
   	.itemNew.state					resd	1
   	.itemNew.stateMask					resd	1
   	.itemNew.pszText					resd	1
   	.itemNew.cchTextMax					resd	1
   	.itemNew.iImage					resd	1
   	.itemNew.iSelectedImage					resd	1
   	.itemNew.cChildren					resd	1
   	.itemNew.lParam					resd	1
   	.ptDrag.x					resd	1
   	.ptDrag.y					resd	1
ENDSTRUC

struc TVDISPINFO
   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.item.mask					resd	1
   	.item.hItem					resd	1
   	.item.state					resd	1
   	.item.stateMask					resd	1
   	.item.pszText					resd	1
   	.item.cchTextMax					resd	1
   	.item.iImage					resd	1
   	.item.iSelectedImage					resd	1
   	.item.cChildren					resd	1
   	.item.lParam					resd	1
ENDSTRUC

struc TVKEYDOWN
   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.wVKey					resw	1
   	.flags					resd	1
ENDSTRUC

struc TCITEMHEADER

   	.mask					resd	1
   	.lpReserved1					resd	1
   	.lpReserved2					resd	1
   	.pszText					resd	1
   	.cchTextMax					resd	1
   	.iImage					resd	1
ENDSTRUC

struc TCITEM

   	.mask					resd	1
   	.lpReserved1					resd	1
   	.lpReserved2					resd	1
   	.pszText					resd	1
   	.cchTextMax					resd	1
   	.iImage					resd	1
   	.lParam					resd	1
ENDSTRUC

struc TCHITTESTINFO

   	.pt.x					resd	1
   	.pt.y					resd	1
   	.flags					resd	1
ENDSTRUC

struc TCKEYDOWN
   	.hdr.hwndFrom					resd	1
   	.hdr.idFrom					resd	1
   	.hdr.code					resd	1
   	.wVKey					resw	1
   	.flags					resd	1
ENDSTRUC

struc MCHITTESTINFO

   	.cbSize					resd	1
   	.pt.x					resd	1
   	.pt.y					resd	1
   	.uHit					resd	1
   	.st.wYear					resw	1
   	.st.wMonth					resw	1
   	.st.wDayOfWeek					resw	1
   	.st.wDay					resw	1
   	.st.wHour					resw	1
   	.st.wMinute					resw	1
   	.st.wSecond					resw	1
   	.st.wMilliseconds					resw	1
ENDSTRUC

struc NMSELCHANGE
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.stSelStart.wYear					resw	1
   	.stSelStart.wMonth					resw	1
   	.stSelStart.wDayOfWeek					resw	1
   	.stSelStart.wDay					resw	1
   	.stSelStart.wHour					resw	1
   	.stSelStart.wMinute					resw	1
   	.stSelStart.wSecond					resw	1
   	.stSelStart.wMilliseconds					resw	1
   	.stSelEnd.wYear					resw	1
   	.stSelEnd.wMonth					resw	1
   	.stSelEnd.wDayOfWeek					resw	1
   	.stSelEnd.wDay					resw	1
   	.stSelEnd.wHour					resw	1
   	.stSelEnd.wMinute					resw	1
   	.stSelEnd.wSecond					resw	1
   	.stSelEnd.wMilliseconds					resw	1
ENDSTRUC

struc NMDAYSTATE
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
    	.stStart.wYear					resw	1
		.stStart.wMonth					resw	1
		.stStart.wDayOfWeek					resw	1
		.stStart.wDay					resw	1
		.stStart.wHour					resw	1
		.stStart.wMinute					resw	1
		.stStart.wSecond					resw	1
   	.cDayState					resd	1
   	.prgDayState					resd	1
ENDSTRUC

struc NMDATETIMECHANGE
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.dwFlags					resd	1
   	.st.wYear					resw	1
		.st.wMonth					resw	1
		.st.wDayOfWeek					resw	1
		.st.wDay					resw	1
		.st.wHour					resw	1
		.st.wMinute					resw	1
		.st.wSecond					resw	1
ENDSTRUC

struc NMDATETIMESTRING
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.pszUserString					resd	1
   	.st.wYear					resw	1
		.st.wMonth					resw	1
		.st.wDayOfWeek					resw	1
		.st.wDay					resw	1
		.st.wHour					resw	1
		.st.wMinute					resw	1
		.st.wSecond					resw	1
   	.dwFlags					resd	1
ENDSTRUC

struc NMDATETIMEWMKEYDOWN
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.nVirtKey					resd	1
   	.pszFormat					resd	1
   	.st.wYear					resw	1
		.st.wMonth					resw	1
		.st.wDayOfWeek					resw	1
		.st.wDay					resw	1
		.st.wHour					resw	1
		.st.wMinute					resw	1
		.st.wSecond					resw	1
ENDSTRUC

struc NMDATETIMEFORMAT
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.pszFormat					resd	1
   	.st.wYear					resw	1
		.st.wMonth					resw	1
		.st.wDayOfWeek					resw	1
		.st.wDay					resw	1
		.st.wHour					resw	1
		.st.wMinute					resw	1
		.st.wSecond					resw	1
   	.pszDisplay					resd	1
   	.szDisplay					resb	64
ENDSTRUC

struc NMDATETIMEFORMATQUERY
   	.nmhdr.hwndFrom					resd	1
   	.nmhdr.idFrom					resd	1
   	.nmhdr.code					resd	1
   	.pszFormat					resd	1
   	.szMax.cx					resd	1
   	.szMax.cy					resd	1
ENDSTRUC

struc OPENFILENAME

   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hInstance					resd	1
   	.lpstrFilter					resd	1
   	.lpstrCustomFilter					resd	1
   	.nMaxCustFilter					resd	1
   	.nFilterIndex					resd	1
   	.lpstrFile					resd	1
   	.nMaxFile					resd	1
   	.lpstrFileTitle					resd	1
   	.nMaxFileTitle					resd	1
   	.lpstrInitialDir					resd	1
   	.lpstrTitle					resd	1
   	.Flags					resd	1
   	.nFileOffset					resw	1
   	.nFileExtension					resw	1
   	.lpstrDefExt					resd	1
   	.lCustData					resd	1
   	.lpfnHook					resd	1
   	.lpTemplateName					resd	1

 ENDSTRUC

struc CHOOSECOLOR

   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hInstance					resd	1
   	.rgbResult					resd	1
   	.lpCustColors					resd	1
   	.Flags					resd	1
   	.lCustData					resd	1
   	.lpfnHook					resd	1
   	.lpTemplateName					resd	1

 ENDSTRUC

struc FINDREPLACE

   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hInstance					resd	1
   	.Flags					resd	1
   	.lpstrFindWhat					resd	1
   	.lpstrReplaceWith					resd	1
   	.wFindWhatLen					resw	1
   	.wReplaceWithLen					resw	1
   	.lCustData					resd	1
   	.lpfnHook					resd	1
   	.lpTemplateName					resd	1

 ENDSTRUC

struc CHOOSEFONT

   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hDC					resd	1
   	.lpLogFont					resd	1
   	.iPointSize					resd	1
   	.Flags					resd	1
   	.rgbColors					resd	1
   	.lCustData					resd	1
   	.lpfnHook					resd	1
   	.lpTemplateName					resd	1
   	.hInstance					resd	1
   	.lpszStyle					resd	1
   	.nFontType					resw	1
   	.wReserved					resw	1
   	.nSizeMin					resd	1
   	.nSizeMax					resd	1

 ENDSTRUC

struc PRINTDLG

   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hDevMode					resd	1
   	.hDevNames					resd	1
   	.hDC					resd	1
   	.Flags					resd	1
   	.nFromPage					resw	1
   	.nToPage					resw	1
   	.nMinPage					resw	1
   	.nMaxPage					resw	1
   	.nCopies					resw	1
   	.hInstance					resd	1
   	.lCustData					resd	1
   	.lpfnPrintHook					resd	1
   	.lpfnSetupHook					resd	1
   	.lpPrintTemplateName					resd	1
   	.lpSetupTemplateName					resd	1
   	.hPrintTemplate					resd	1
   	.hSetupTemplate					resd	1

 ENDSTRUC

struc DEVNAMES

   	.wDriverOffset					resw	1
   	.wDeviceOffset					resw	1
   	.wOutputOffset					resw	1
   	.wDefault					resw	1
 ENDSTRUC

struc PAGESETUPDLG
   	.lStructSize					resd	1
   	.hwndOwner					resd	1
   	.hDevMode					resd	1
   	.hDevNames					resd	1
   	.Flags					resd	1
   	.ptPaperSize.x					resd	1
   	.ptPaperSize.y					resd	1
   	.rtMinMargin.left					resd	1
   	.rtMinMargin.top					resd	1
   	.rtMinMargin.right					resd	1
   	.rtMinMargin.bottom					resd	1
   	.rtMargin.left					resd	1
   	.rtMargin.top					resd	1
   	.rtMargin.right					resd	1
   	.rtMargin.bottom					resd	1
   	.hInstance					resd	1
   	.lCustData					resd	1
   	.lpfnPageSetupHook					resd	1
   	.lpfnPagePaintHook					resd	1
   	.lpPageSetupTemplateName					resd	1
   	.hPageSetupTemplate					resd	1
ENDSTRUC

struc SIZE

   	.cx					resd	1
   	.cy					resd	1
ENDSTRUC

struc BITMAP

   	.bmType					resd	1
   	.bmWidth					resd	1
   	.bmHeight					resd	1
   	.bmWidthBytes					resd	1
   	.bmPlanes					resw	1
   	.bmBitsPixel					resw	1
   	.bmBits					resd	1
ENDSTRUC

struc BITMAPCOREHEADER

   	.bcSize					resd	1
   	.bcWidth					resw	1
   	.bcHeight					resw	1
   	.bcPlanes					resw	1
   	.bcBitCount					resw	1
ENDSTRUC

struc BITMAPINFOHEADER

   	.biSize					resd	1
   	.biWidth					resd	1
   	.biHeight					resd	1
   	.biPlanes					resw	1
   	.biBitCount					resw	1
   	.biCompression					resd	1
   	.biSizeImage					resd	1
   	.biXPelsPerMeter					resd	1
   	.biYPelsPerMeter					resd	1
   	.biClrUsed					resd	1
   	.biClrImportant					resd	1
ENDSTRUC

struc BITMAPFILEHEADER

   	.bfType					resw	1
   	.bfSize					resd	1
   	.bfReserved1					resw	1
   	.bfReserved2					resw	1
   	.bfOffBits					resd	1
ENDSTRUC

STRUC BITMAPINFO
	.bmiHeader.biSize					resd	1
	.bmiHeader.biWidth					resd	1
	.bmiHeader.biHeight					resd	1
	.bmiHeader.biPlanes					resw	1
	.bmiHeader.biBitCount					resw	1
	.bmiHeader.biCompression					resd	1
	.bmiHeader.biSizeImage					resd	1
	.bmiHeader.biXPelsPerMeter					resd	1
	.bmiHeader.biYPelsPerMeter					resd	1
	.bmiHeader.biClrUsed					resd	1
	.bmiHeader.biClrImportant					resd	1
	.bmiColors					resd	1
ENDSTRUC

struc TEXTMETRIC

   	.tmHeight					resd	1
   	.tmAscent					resd	1
   	.tmDescent					resd	1
   	.tmInternalLeading					resd	1
   	.tmExternalLeading					resd	1
   	.tmAveCharWidth					resd	1
   	.tmMaxCharWidth					resd	1
   	.tmWeight					resd	1
   	.tmOverhang					resd	1
   	.tmDigitizedAspectX					resd	1
   	.tmDigitizedAspectY					resd	1
   	.tmFirstChar					resb	1
   	.tmLastChar					resb	1
   	.tmDefaultChar					resb	1
   	.tmBreakChar					resb	1
   	.tmItalic					resb	1
   	.tmUnderlined					resb	1
   	.tmStruckOut					resb	1
   	.tmPitchAndFamily					resb	1
   	.tmCharSet					resb	1
ENDSTRUC

struc LOGBRUSH

   	.lbStyle					resd	1
   	.lbColor					resd	1
   	.lbHatch					resd	1
ENDSTRUC

struc LOGPEN

   	.lopnStyle					resd	1
   	.lopnWidth.x					resd	1
   	.lopnWidth.y					resd	1
   	.lopnColor					resd	1
ENDSTRUC

struc EXTLOGPEN

    elpPenStyle   resd 1
    elpWidth	  resd 1
    elpBrushStyle resd 1
    elpColor	  resd 1
    elpHatch	  resd 1
    elpNumEntries resd 1
    elpStyleEntry resd 1
ENDSTRUC

struc LOGFONT

   	.lfHeight					resd	1
   	.lfWidth					resd	1
   	.lfEscapement					resd	1
   	.lfOrientation					resd	1
   	.lfWeight					resd	1
   	.lfItalic					resb	1
   	.lfUnderline					resb	1
   	.lfStrikeOut					resb	1
   	.lfCharSet					resb	1
   	.lfOutPrecision					resb	1
   	.lfClipPrecision					resb	1
   	.lfQuality					resb	1
   	.lfPitchAndFamily					resb	1
   	.lfFaceName					resb	32
ENDSTRUC

struc ENUMLOGFONT

   	.elfLogFont.lfHeight					resd	1
   	.elfLogFont.lfWidth					resd	1
   	.elfLogFont.lfEscapement					resd	1
   	.elfLogFont.lfOrientation					resd	1
   	.elfLogFont.lfWeight					resd	1
   	.elfLogFont.lfItalic					resb	1
   	.elfLogFont.lfUnderline					resb	1
   	.elfLogFont.lfStrikeOut					resb	1
   	.elfLogFont.lfCharSet					resb	1
   	.elfLogFont.lfOutPrecision					resb	1
   	.elfLogFont.lfClipPrecision					resb	1
   	.elfLogFont.lfQuality					resb	1
   	.elfLogFont.lfPitchAndFamily					resb	1
   	.elfLogFont.lfFaceName					resb	32
   	.elfFullName					resb	64
   	.elfStyle					resb	32
ENDSTRUC

struc ENUMLOGFONTEX

   	.elfLogFont.lfHeight					resd	1
   	.elfLogFont.lfWidth					resd	1
   	.elfLogFont.lfEscapement					resd	1
   	.elfLogFont.lfOrientation					resd	1
   	.elfLogFont.lfWeight					resd	1
   	.elfLogFont.lfItalic					resb	1
   	.elfLogFont.lfUnderline					resb	1
   	.elfLogFont.lfStrikeOut					resb	1
   	.elfLogFont.lfCharSet					resb	1
   	.elfLogFont.lfOutPrecision					resb	1
   	.elfLogFont.lfClipPrecision					resb	1
   	.elfLogFont.lfQuality					resb	1
   	.elfLogFont.lfPitchAndFamily					resb	1
   	.elfLogFont.lfFaceName					resb	32
   	.elfFullName					resb	64
   	.elfStyle					resb	32
   	.elfScript					resb	32
ENDSTRUC

STRUC DEVMODE
	.dmDeviceName					resb	32
	.dmSpecVersion					resw	1
	.dmDriverVersion					resw	1
	.dmSize					resw	1
	.dmDriverExtra					resw	1
	.dmFields					resd	1
	.dmOrientation					resw	1
	.dmPaperSize					resw	1
	.dmPaperLength					resw	1
	.dmPaperWidth					resw	1
; dmPosition POINTL <>
	.dmScale					resw	1
	.dmCopies					resw	1
	.dmDefaultSource					resw	1
	.dmPrintQuality					resw	1
	.dmColor					resw	1
	.dmDuplex					resw	1
	.dmYResolution					resw	1
	.dmTTOption					resw	1
	.dmCollate					resw	1
	.dmFormName					resb	32
	.dmLogPixels					resw	1
	.dmBitsPerPel					resd	1
	.dmPelsWidth					resd	1
	.dmPelsHeight					resd	1
	.dmDisplayFlags					resd	1
	.dmDisplayFrequency					resd	1
	.dmICMMethod					resd	1
	.dmICMIntent					resd	1
	.dmMediaType					resd	1
	.dmDitherType					resd	1
	.dmReserved1					resd	1
	.dmReserved2					resd	1
ENDSTRUC

; KERNEL32.DLL structures and constants

struc SYSTEMINFO
   	.wProcessorArchitecture					resw	1
   	.wReserved					resw	1
   	.dwPageSize					resd	1
   	.lpMinimumApplicationAddress					resd	1
   	.lpMaximumApplicationAddress					resd	1
   	.dwActiveProcessorMask					resd	1
   	.dwNumberOfProcessors					resd	1
   	.dwProcessorType					resd	1
   	.dwAllocationGranularity					resd	1
   	.wProcessorLevel					resw	1
   	.wProcessorRevision					resw	1
ENDSTRUC

struc OSVERSIONINFO
   	.dwOSVersionInfoSize					resd	1
   	.dwMajorVersion					resd	1
   	.dwMinorVersion					resd	1
   	.dwBuildNumber					resd	1
   	.dwPlatformId					resd	1
   	.szCSDVersion					resb	128
ENDSTRUC

struc MEMORYSTATUS
   	.dwiLength					resd	1
   	.dwMemoryLoad					resd	1
   	.dwTotalPhys					resd	1
   	.dwAvailPhys					resd	1
   	.dwTotalPageFile					resd	1
   	.dwAvailPageFile					resd	1
   	.dwTotalVirtual					resd	1
   	.dwAvailVirtual					resd	1
ENDSTRUC

struc STARTUPINFO
   	.cb					resd	1
   	.lpReserved					resd	1
   	.lpDesktop					resd	1
   	.lpTitle					resd	1
   	.dwX					resd	1
   	.dwY					resd	1
   	.dwXSize					resd	1
   	.dwYSize					resd	1
   	.dwXCountChars					resd	1
   	.dwYCountChars					resd	1
   	.dwFillAttribute					resd	1
   	.dwFlags					resd	1
   	.wShowWindow					resw	1
   	.cbReserved2					resw	1
   	.lpReserved2					resd	1
   	.hStdInput					resd	1
   	.hStdOutput					resd	1
   	.hStdError					resd	1
ENDSTRUC

struc PROCESSINFO
   	.hProcess					resd	1
   	.hThread					resd	1
   	.dwProcessId					resd	1
   	.dwThreadId					resd	1
ENDSTRUC

struc FILETIME
   	.dwLowDateTime					resd	1
   	.dwHighDateTime					resd	1
ENDSTRUC

struc SYSTEMTIME
   	.wYear					resw	1
   	.wMonth					resw	1
   	.wDayOfWeek					resw	1
   	.wDay					resw	1
   	.wHour					resw	1
   	.wMinute					resw	1
   	.wSecond					resw	1
   	.wMilliseconds					resw	1
ENDSTRUC

struc BYHANDLEFILEINFO
   	.dwFileAttributes					resd	1
   	.ftCreationTime.dwLowDateTime					resd	1
   	.ftCreationTime.dwHighDateTime					resd	1
   	.ftLastAccessTime.dwLowDateTime					resd	1
   	.ftLastAccessTime.dwHighDateTime					resd	1
   	.ftLastWriteTime.dwLowDateTime					resd	1
   	.ftLastWriteTime.dwHighDateTime					resd	1
   	.dwVolumeSerialNumber					resd	1
   	.nFileSizeHigh					resd	1
   	.nFileSizeLow					resd	1
   	.nNumberOfLinks					resd	1
   	.nFileIndexHigh					resd	1
   	.nFileIndexLow					resd	1
ENDSTRUC

struc FINDDATA
   	.dwFileAttributes					resd	1
   	.ftCreationTime.dwLowDateTime					resd	1
   	.ftCreationTime.dwHighDateTime					resd	1
   	.ftLastAccessTime.dwLowDateTime					resd	1
   	.ftLastAccessTime.dwHighDateTime					resd	1
   	.ftLastWriteTime.dwLowDateTime					resd	1
   	.ftLastWriteTime.dwHighDateTime					resd	1
   	.nFileSizeHigh					resd	1
   	.nFileSizeLow					resd	1
   	.dwReserved0					resd	1
   	.dwReserved1					resd	1
   	.cFileName					resb	260
   	.cAlternateFileName					resb	14
ENDSTRUC

STRUC CONTEXT 
	.ContextFlags					resd	1
	.iDr0					resd	1
	.iDr1					resd	1
	.iDr2					resd	1
	.iDr3					resd	1
	.iDr6					resd	1
	.iDr7					resd	1
.FloatSave:
	.FloatSave.ControlWord					resd	1
	.FloatSave.StatusWord					resd	1
	.FloatSave.TagWord					resd	1
	.FloatSave.ErrorOffset					resd	1
	.FloatSave.ErrorSelector					resd	1
	.FloatSave.DataOffset					resd	1
	.FloatSave.DataSelector					resd	1
	.FloatSave.RegisterArea					resb	80
	.FloatSave.Cr0NpxState					resd	1
	.regGs					resd	1
	.regFs					resd	1
	.regEs					resd	1
	.regDs					resd	1
	.regEdi					resd	1
	.regEsi					resd	1
	.regEbx					resd	1
	.regEdx					resd	1
	.regEcx					resd	1
	.regEax					resd	1
	.regEbp					resd	1
	.regEip					resd	1
	.regCs					resd	1
	.regFlag					resd	1
	.regEsp					resd	1
	.regSs					resd	1
	.ExtendedRegisters					resb	512
ENDSTRUC

STRUC EXCEPTION_RECORD 
	.ExceptionCode					resd	1
	.ExceptionFlags					resd	1
	.pExceptionRecord					resd	1
	.ExceptionAddress					resd	1
	.NumberParameters					resd	1
	.ExceptionInformation					resd	15
ENDSTRUC

STRUC PROCESSENTRY32
	.dwSize					resd	1
	.cntUsage					resd	1
	.th32ProcessID					resd	1
	.th32DefaultHeapID					resd	1
	.th32ModuleID					resd	1
	.cntThreads					resd	1
	.th32ParentProcessID					resd	1
	.pcPriClassBase					resd	1
	.dwFlags					resd	1
	.szExeFile					resb	MAX_PATH
ENDSTRUC

STRUC CRITICAL_SECTION
	.DebugInfo					resd	1
	.LockCount					resd	1
	.RecursionCount					resd	1
	.OwningThread					resd	1
	.LockSemaphore					resd	1
	.Reserved					resd	1
ENDSTRUC

STRUC NOTIFYICONDATA
	.cbSize					resd	1
	.hwnd					resd	1
	.uID					resd	1
	.uFlags					resd	1
	.uCallbackMessage					resd	1
	.hIcon					resd	1
	.szTip					resb	64
ENDSTRUC

struc BROWSEINFO
	.hwndOwner					resd	1
	.pidlRoot					resd	1
	.pszDisplayName					resd	1
	.lpszTitle					resd	1
	.ulFlags					resd	1
	.lpfn					resd	1
	.lParam					resd	1
	.iImage					resd	1
endstruc

