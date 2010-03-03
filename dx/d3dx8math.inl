%IFNDEF _D3DX8MATH_INL_
%DEFINE _D3DX8MATH_INL_

%MACRO D3DXMatrixIdentity 1
	mov ecx,4
	mov edx,%1
%%RowLoop:
	mov ch,4
%%ColLoop:
	sub eax,eax
	cmp cl,ch
	jnz @F
		mov eax,1
	@@
	mov [edx],eax
	add edx,4
	dec ch
jnz %%ColLoop
loop %%RowLoop

	mov eax, %1
%ENDMACRO

%MACRO D3DXVec3Cross 3
 mov eax,%2
 mov edx,%3
 fld [eax+_D3DVECTOR.x]
 fld st(0)
 fmul [edx+_D3DVECTOR.z]
 fxch
 fmul [edx+_D3DVECTOR.y]

 fld [eax+_D3DVECTOR.y]
 fld st(0)
 fmul [edx+_D3DVECTOR.z]
 fxch
 fmul [edx+_D3DVECTOR.x]

 fld [eax+_D3DVECTOR.z]
 fld st(0)
 fmul [edx+_D3DVECTOR.y]
 fxch
 fmul [edx+_D3DVECTOR.x]

 fxch st(5)
 fsubp st(5),st
 fsubp st(2),st
 fsubp st(2),st
 mov eax,%1
 fstp [eax+_D3DVECTOR.x]
 fstp [eax+_D3DVECTOR.z]
 fstp [eax+_D3DVECTOR.y]
%ENDMACRO

%MACRO D3DXVec3Dot 2
 mov eax,%1
 mov edx,%2
 fld [eax+_D3DVECTOR.x]
 fmul [edx+_D3DVECTOR.x]
 fld [eax+_D3DVECTOR.y]
 fmul [edx+_D3DVECTOR.y]
 faddp st(1),st
 fld [eax+_D3DVECTOR.z]
 fmul [edx+_D3DVECTOR.z]
 faddp st(1),st
%ENDMACRO

%ENDIF