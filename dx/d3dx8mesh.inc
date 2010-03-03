%ifndef __D3DX8MESH__
%DEFINE __D3DX8MESH__

;D3DXCreateMesh      PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreateMeshFVF     PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreateSPMesh      PROTO   DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCleanMesh         PROTO   DWORD, DWORD, DWORD
;  D3DXValidMesh         PROTO   DWORD, DWORD, DWORD
;  D3DXGeneratePMesh     PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXSimplifyMesh      PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXComputeBoundingSphere PROTO   DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXComputeBoundingBox    PROTO   DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXComputeNormals        PROTO   DWORD, DWORD
;  D3DXCreateBuffer      PROTO   DWORD, DWORD
;  D3DXLoadMeshFromX     PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXSaveMeshToX            PROTO  DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreatePMeshFromStream PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreateSkinMesh        PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreateSkinMeshFVF     PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXCreateSkinMeshFromMesh    PROTO   DWORD, DWORD, DWORD
;  D3DXLoadMeshFromXof       PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXLoadSkinMeshFromXof   PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXTesselateMesh     PROTO   DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXTessellateNPatches        PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXDeclaratorFromFVF     PROTO   DWORD, DWORD
;  D3DXFVFFromDeclarator     PROTO   DWORD, DWORD
;  D3DXWeldVertices      PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXIntersect         PROTO   DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
;  D3DXSphereBoundProbe      PROTO   DWORD, DWORD, DWORD, DWORD
;  D3DXBoxBoundProbe     PROTO   DWORD, DWORD, DWORD, DWORD

STRUC ID3DXBaseMesh

  INHERIT_IUnknown

  STDMETHOD DrawSubset, DWORD
  STDMETHOD GetNumFaces
  STDMETHOD GetNumVertices
  STDMETHOD GetFVF
  STDMETHOD GetDeclaration, DWORD
  STDMETHOD GetOptions
  STDMETHOD GetDevice,  DWORD
  STDMETHOD CloneMeshFVF, DWORD, DWORD, DWORD, DWORD
  STDMETHOD CloneMesh, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GetVertexBuffer, DWORD
  STDMETHOD GetIndexBuffer, DWORD
  STDMETHOD LockVertexBuffer, DWORD, DWORD
  STDMETHOD UnlockVertexBuffer
  STDMETHOD LockIndexBuffer, DWORD, DWORD
  STDMETHOD UnlockIndexBuffer
  STDMETHOD GetAttributeTable, DWORD, DWORD
ENDSTRUC

STRUC ID3DXMesh

  INHERIT_IUnknown

  STDMETHOD DrawSubset, DWORD
  STDMETHOD GetNumFaces
  STDMETHOD GetNumVertices
  STDMETHOD GetFVF
  STDMETHOD GetDeclaration, DWORD
  STDMETHOD GetOptions
  STDMETHOD GetDevice,  DWORD
  STDMETHOD CloneMeshFVF, DWORD, DWORD, DWORD, DWORD
  STDMETHOD CloneMesh, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GetVertexBuffer, DWORD
  STDMETHOD GetIndexBuffer, DWORD
  STDMETHOD LockVertexBuffer, DWORD, DWORD
  STDMETHOD UnlockVertexBuffer
  STDMETHOD LockIndexBuffer, DWORD, DWORD
  STDMETHOD UnlockIndexBuffer
  STDMETHOD GetAttributeTable, DWORD, DWORD

  STDMETHOD LockAttributeBuffer, DWORD, DWORD
  STDMETHOD UnlockAttributeBuffer
  STDMETHOD ConvertPointRepsToAdjacency, DWORD, DWORD
  STDMETHOD ConvertAdjacencyToPointReps, DWORD, DWORD
  STDMETHOD GenerateAdjacency, DWORD, DWORD
  STDMETHOD Optimize, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD OptimizeInplace, DWORD, DWORD, DWORD, DWORD, DWORD
ENDSTRUC

STRUC ID3DXPMesh

  INHERIT_IUnknown

  STDMETHOD DrawSubset, DWORD
  STDMETHOD GetNumFaces
  STDMETHOD GetNumVertices
  STDMETHOD GetFVF
  STDMETHOD GetDeclaration, DWORD
  STDMETHOD GetOptions
  STDMETHOD GetDevice,  DWORD
  STDMETHOD CloneMeshFVF, DWORD, DWORD, DWORD, DWORD
  STDMETHOD CloneMesh, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GetVertexBuffer, DWORD
  STDMETHOD GetIndexBuffer, DWORD
  STDMETHOD LockVertexBuffer, DWORD, DWORD
  STDMETHOD UnlockVertexBuffer
  STDMETHOD LockIndexBuffer, DWORD, DWORD
  STDMETHOD UnlockIndexBuffer
  STDMETHOD GetAttributeTable, DWORD, DWORD

  STDMETHOD ClonePMeshFVF, DWORD, DWORD, DWORD, DWORD
  STDMETHOD ClonePMesh, DWORD, DWORD, DWORD, DWORD
  STDMETHOD SetNumFaces, DWORD
  STDMETHOD SetNumVertices, DWORD
  STDMETHOD GetMaxFaces
  STDMETHOD GetMinFaces
  STDMETHOD GetMaxVertices
  STDMETHOD GetMinVertices
  STDMETHOD Save, DWORD, DWORD, DWORD
  STDMETHOD Optimize, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GetAdjacency, DWORD
ENDSTRUC

STRUC ID3DXSPMesh

  INHERIT_IUnknown

  STDMETHOD GetNumFaces
  STDMETHOD GetNumVertices
  STDMETHOD GetFVF
  STDMETHOD GetDeclaration, DWORD
  STDMETHOD GetOptions
  STDMETHOD GetDevice, DWORD
  STDMETHOD CloneMeshFVF, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD CloneMesh, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD ClonePMeshFVF, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD ClonePMesh, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD ReduceFaces, DWORD
  STDMETHOD ReduceVertices, DWORD
  STDMETHOD GetMaxFaces
  STDMETHOD GetMaxVertices
ENDSTRUC

STRUC ID3DXSkinMesh

  INHERIT_IUnknown

  STDMETHOD GetNumFaces
  STDMETHOD GetNumVertices
  STDMETHOD GetFVF
  STDMETHOD GetDeclaration, DWORD
  STDMETHOD GetOptions
  STDMETHOD GetDevice, DWORD
  STDMETHOD GetVertexBuffer, DWORD
  STDMETHOD GetIndexBuffer, DWORD
  STDMETHOD LockVertexBuffer, DWORD, DWORD
  STDMETHOD UnlockVertexBuffer
  STDMETHOD LockIndexBuffer, DWORD, DWORD
  STDMETHOD UnlockIndexBuffer
  STDMETHOD LockAttributeBuffer , DWORD, DWORD
  STDMETHOD UnlockAttributeBuffer
  STDMETHOD GetNumBones
  STDMETHOD GetOriginalMesh, DWORD
  STDMETHOD SetBoneInfluence, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GetNumBoneInfluences, DWORD
  STDMETHOD GetBoneInfluence, DWORD, DWORD, DWORD
  STDMETHOD GetMaxVertexInfluences, DWORD
  STDMETHOD GetMaxFaceInfluences, DWORD
  STDMETHOD ConvertToBlendedMesh, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD ConvertToIndexedBlendedMesh, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD GenerateSkinnedMesh, DWORD, DWORD, DWORD, DWORD, DWORD
  STDMETHOD UpdateSkinnedMesh, DWORD, DWORD
ENDSTRUC

D3DXMESH_32BIT          EQU     00001h
D3DXMESH_DONOTCLIP              EQU     00002h
D3DXMESH_POINTS                 EQU     00004h
D3DXMESH_RTPATCHES              EQU     00008h
D3DXMESH_NPATCHES       EQU     04000h
D3DXMESH_VB_SYSTEMMEM       EQU     00010h
D3DXMESH_VB_MANAGED             EQU     00020h
D3DXMESH_VB_WRITEONLY           EQU     00040h
D3DXMESH_VB_DYNAMIC             EQU     00080h
D3DXMESH_IB_SYSTEMMEM       EQU     00100h
D3DXMESH_IB_MANAGED             EQU     00200h
D3DXMESH_IB_WRITEONLY           EQU     00400h
D3DXMESH_IB_DYNAMIC             EQU     00800h

D3DXMESH_VB_SHARE               EQU     01000h
D3DXMESH_USEHWONLY              EQU     02000h

D3DXMESH_SYSTEMMEM      EQU     00110h
D3DXMESH_MANAGED                EQU     00220h
D3DXMESH_WRITEONLY              EQU     00440h
D3DXMESH_DYNAMIC                EQU     00880h

D3DXMESHSIMP_VERTEX         equ     01
D3DXMESHSIMP_FACE           equ     02

MAX_FVF_DECL_SIZE       equ     20

STRUC D3DXATTRIBUTERANGE

  .AttribId          resd       1
  .FaceStart         resd       1
  .FaceCount         resd       1
  .VertexStart           resd       1
  .VertexCount           resd       1
ENDSTRUC

STRUC D3DXMATERIAL
  MatD3D.Diffuse     D3DCOLORVALUE
  MatD3D.Ambient     D3DCOLORVALUE
  MatD3D.Specular    D3DCOLORVALUE
  MatD3D.Emissive    D3DCOLORVALUE
  MatD3D.Power       resd           1
  .pTextureFilename      resd       1
ENDSTRUC

STRUC D3DXATTRIBUTEWEIGHTS

    .Position            resd       1
    .Boundary            resd       1
    .Normal          resd       1
    .Diffuse         resd       1
    .Specular            resd       1
    .Tex             resd       8
ENDSTRUC

UNUSED16            equ     0ffffh
UNUSED32            equ     0ffffffffh

D3DXMESHOPT_COMPACT         equ     0001h
D3DXMESHOPT_ATTRSORT        equ     0002h
D3DXMESHOPT_VERTEXCACHE         equ     0004h
D3DXMESHOPT_STRIPREORDER        equ     0008h
D3DXMESHOPT_IGNOREVERTS         equ     0010h
D3DXMESHOPT_SHAREVB         equ     0020h

STRUC D3DXBONECOMBINATION

  .AttribId          resd       1
  .FaceStart         resd       1
  .FaceCount         resd       1
  .VertexStart           resd       1
  .VertexCount           resd       1
  .BoneId            resd       1
ENDSTRUC

MAKE_D3DHRESULT D3DXERR_CANNOTMODIFYINDEXBUFFER, 2900
MAKE_D3DHRESULT D3DXERR_INVALIDMESH,         2901
MAKE_D3DHRESULT D3DXERR_CANNOTATTRSORT,          2902
MAKE_D3DHRESULT D3DXERR_SKINNINGNOTSUPPORTED,    2903
MAKE_D3DHRESULT D3DXERR_TOOMANYINFLUENCES,   2904
MAKE_D3DHRESULT D3DXERR_INVALIDDATA,             2905

%endif
