// KIPFD.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "cximage/ximage.h"
#include "ida/defs.h"

_DWORD dword_1006DE5C = 0;
//////////////////////////////////////////////////////////////////////KipFD_FreeFeature()
int KipFD_FreeFeature(int a1)
{
  if ( !a1 || !*(int*)(a1 + 16) || !*(int*)(a1 + 20) )
    return 1;
  delete (*(void **)(a1 + 16));
  delete (*(void **)(a1 + 20));
  return 0;
}
//////////////////////////////////////////////////////////////////////KipFD_FreeLandmarks()
int KipFD_FreeLandmarks(void *a1)
{
  if ( !a1 )
    return 1;
  delete a1;
  return 0;
}
//////////////////////////////////////////////////////////////////////KipFD_GetLastError()
int KipFD_GetLastError()
{
  return 0;
}
//////////////////////////////////////////////////////////////////////KipFD_SaveFaceThumbnail()
int sub_100197C0(float* a1)
{
	return 1;
}

int __stdcall sub_10030000(int a1)
{
	int v1; // edx

	*(_DWORD *)a1 = &unk_1005677C;
	// *(_DWORD *)(a1 + 88) = &std::ios::`vftable';
	sub_10030520(a1, a1 + 8);
	// *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)) = &std::ifstream::`vftable';
	sub_10030D80(a1 + 8);
	*(_DWORD *)(a1 + 24) = a1 + 16;
	*(_DWORD *)(a1 + 40) = a1 + 32;
	*(_DWORD *)(a1 + 44) = a1 + 36;
	// *(_DWORD *)(a1 + 8) = &std::filebuf::`vftable';
	*(_BYTE *)(a1 + 80) = 0;
	*(_BYTE *)(a1 + 73) = 0;
	*(_DWORD *)(a1 + 28) = a1 + 20;
	*(_DWORD *)(a1 + 56) = a1 + 48;
	*(_DWORD *)(a1 + 60) = a1 + 52;
	*(_DWORD *)(a1 + 20) = 0;
	**(_DWORD **)(a1 + 44) = 0;
	**(_DWORD **)(a1 + 60) = 0;
	**(_DWORD **)(a1 + 24) = 0;
	v1 = dword_1006DE9C;
	**(_DWORD **)(a1 + 40) = 0;
	**(_DWORD **)(a1 + 56) = 0;
	*(_DWORD *)(a1 + 84) = 0;
	*(_DWORD *)(a1 + 76) = v1;
	*(_DWORD *)(a1 + 68) = 0;
	return a1;
}

int __cdecl sub_1002EDC0()
{
	int v0; // eax
	int v1; // ecx
	int v2; // eax
	_DWORD *v3; // ecx
	char v4; // al
	int v5; // eax
	int v7; // esi
	__int64 v8; // [esp+Ch] [ebp-B8h] BYREF
	__time64_t Time; // [esp+14h] [ebp-B0h] BYREF
	int v10[22]; // [esp+1Ch] [ebp-A8h] BYREF
	int v11[14]; // [esp+74h] [ebp-50h] BYREF
	char v12[12]; // [esp+ACh] [ebp-18h] BYREF
	int v13; // [esp+C0h] [ebp-4h]

	sub_10030000(v10);
	v13 = 0;
	v0 = sub_1002E840(&v8, v12);
	if ( !v0 )
	{
		if ( !sub_10030600(97) )
		{
			v1 = *(_DWORD *)(v10[0] + 4);
			v2 = *(int *)((char *)&v10[2] + v1);
			v3 = (int *)((char *)v10 + v1);
			v4 = v2 | 2;
			if ( !v3[10] )
				v4 |= 4u;
			v5 = v4 & 0x17;
			v3[2] = v5;
			if ( (v5 & v3[3]) != 0 )
				sub_1002E630(0);
		}
		if ( (*((_BYTE *)&v10[2] + *(_DWORD *)(v10[0] + 4)) & 6) != 0 )
		{
			sub_1002EAA0();
			v13 = -1;
			sub_100300E0();
			// v11[0] = (int)&std::ios_base::`vftable';
			std::ios_base::_Ios_base_dtor((struct std::ios_base *)v11);
			return 2;
		}
		v13 = -1;
		sub_100300E0();
		// v11[0] = (int)&std::ios_base::`vftable';
		goto LABEL_10;
	}
	if ( v0 >= 0 )
	{
		_time64(&Time);
		v7 = 2 - (Time - v8) / 86400;
		v13 = -1;
		sub_100300E0();
		// v11[0] = (int)&std::ios_base::`vftable';
		if ( v7 > 2 )
		{
LABEL_10:
			std::ios_base::_Ios_base_dtor((struct std::ios_base *)v11);
			return 0;
		}
		std::ios_base::_Ios_base_dtor((struct std::ios_base *)v11);
		return v7;
	}
	else
	{
		v13 = -1;
		sub_100300E0();
		// v11[0] = (int)&std::ios_base::`vftable';
		std::ios_base::_Ios_base_dtor((struct std::ios_base *)v11);
		return 0;
	}
}

int sub_1004594A(WORD a1, WORD a2, WORD a3)
{
	//return _cintrindisp2(this, &unk_1006CA50);
	return -1;
}

int __cdecl sub_10015B10(float a1, float a2, float a3)
{
	float v4; // [esp+10h] [ebp+Ch]

	v4 = a3 - a1;
	return sub_1004594A(LODWORD(a1), LODWORD(a2), LODWORD(v4));
}

int __cdecl sub_10015AD0(float a1, float a2, float a3, float a4)
{
	float v5; // [esp+0h] [ebp-4h]
	float v6; // [esp+10h] [ebp+Ch]

	v5 = a3 - a1;
	v6 = a4 - a2;
	return (int)sqrt(v6 * v6 + v5 * v5);
}

int __cdecl KipFD_SaveFaceThumbnail(int a1, int a2, int a3, const wchar_t *a4)
{
	double v4; // st3
	long double v5; // st7
	long double v6; // st7
	long double v7; // st2
	long double v8; // st3
	int v9; // ebx
	int v10; // edi
	float v12; // [esp+44h] [ebp-394h]
	float v13; // [esp+44h] [ebp-394h]
	float v14; // [esp+44h] [ebp-394h]
	float v15; // [esp+44h] [ebp-394h]
	float v16; // [esp+44h] [ebp-394h]
	float v17; // [esp+44h] [ebp-394h]
	float v18; // [esp+44h] [ebp-394h]
	float v19; // [esp+48h] [ebp-390h]
	long double v20; // [esp+48h] [ebp-390h]
	long double v21; // [esp+48h] [ebp-390h]
	float v22; // [esp+4Ch] [ebp-38Ch]
	float v23; // [esp+50h] [ebp-388h]
	float v24; // [esp+50h] [ebp-388h]
	float v25; // [esp+50h] [ebp-388h]
	float v26; // [esp+54h] [ebp-384h]
	float v27; // [esp+58h] [ebp-380h]
	float v28; // [esp+58h] [ebp-380h]
	float v29; // [esp+58h] [ebp-380h]
	float v30; // [esp+58h] [ebp-380h]
	float v31; // [esp+58h] [ebp-380h]
	float v32; // [esp+5Ch] [ebp-37Ch]
	float v33; // [esp+5Ch] [ebp-37Ch]
	float v34; // [esp+5Ch] [ebp-37Ch]
	float v35; // [esp+5Ch] [ebp-37Ch]
	float v36; // [esp+60h] [ebp-378h]
	float v37; // [esp+60h] [ebp-378h]
	float v38; // [esp+60h] [ebp-378h]
	float v39; // [esp+64h] [ebp-374h]
	float v40; // [esp+64h] [ebp-374h]
	float v41; // [esp+64h] [ebp-374h]
	float v42; // [esp+70h] [ebp-368h]
	float v43; // [esp+70h] [ebp-368h]
	float v44; // [esp+70h] [ebp-368h]
	float v45; // [esp+74h] [ebp-364h]
	float v46; // [esp+74h] [ebp-364h]
	float v47; // [esp+74h] [ebp-364h]
	long double v48; // [esp+80h] [ebp-358h]
	long double v49; // [esp+80h] [ebp-358h]
	long double v50; // [esp+80h] [ebp-358h]
	float v51; // [esp+90h] [ebp-348h] BYREF
	float v52; // [esp+94h] [ebp-344h]
	float v53; // [esp+98h] [ebp-340h]
	float v54; // [esp+9Ch] [ebp-33Ch]
	float v55; // [esp+104h] [ebp-2D4h]
	float v56; // [esp+108h] [ebp-2D0h]
	float v57; // [esp+11Ch] [ebp-2BCh]
	float v58; // [esp+120h] [ebp-2B8h]
	float v59; // [esp+134h] [ebp-2A4h]
	float v60; // [esp+138h] [ebp-2A0h]
	CxImage* newImage; // [esp+1D0h] [ebp-208h] BYREF ;	v61=>newImage

	if ( a1 && a2 && *(_DWORD *)a2 == 20 && (int)sub_100197C0(&v51) > 0 )
	{
		newImage = new CxImage();
		if ( newImage->CreateFromArray(			
			*(unsigned __int8 **)(a2 + 16),	//	BYTE* pArray
			*(_DWORD *)(a2 + 4),			//	DWORD dwWidth
			*(_DWORD *)(a2 + 8),			//	DWORD dwHeight
			0x18u,							//	DWORD dwBitsperpixel [8*c=24; c=3]
			*(_DWORD *)(a2 + 12),			//	DWORD dwBytesperline [c*w;3*(a2+4)]
			0) )							//	bool bFlipImage
		{
			if ( (int)sub_1002EDC0() <= 2 && (int)sub_1002EDC0() > 0 )
			{
				v23 = (v51 + v53) * 0.5;
				v26 = 0.5 * (v52 + v54);
				v19 = v59 - v23;
				v22 = v60 - v26;
				v12 = v51 + v19;
				v4 = v12;
				v27 = v12;
				v13 = v52 + v22;
				v36 = v53 + v19;
				v39 = v13;
				v42 = v4;
				v5 = v22 + v54;
				v45 = v5;
				sub_10015B10(v55, v56, v57);
				v48 = v5;
				v20 = cos(v5);
				v6 = sin(v5);
				v28 = (v27 - v59) * 1.5;
				v32 = (v13 - v60) * 1.75;
				v7 = v20;
				v14 = v32 * v20 + v28 * v6;
				v8 = -v6;
				*(float *)&v20 = v32 * v8 + v28 * v20;
				v29 = *(float *)&v20 + v59;
				v33 = v14 + v60;
				v37 = (v36 - v59) * 1.5;
				v40 = (v39 - v60) * 1.75;
				v15 = v37 * v6 + v40 * v7;
				*(float *)&v20 = v40 * v8 + v37 * v7;
				v38 = *(float *)&v20 + v59;
				v41 = v15 + v60;
				v43 = 1.5 * (v42 - v59);
				v46 = (v45 - v60) * 1.75;
				v16 = v6 * v43 + v46 * v7;
				*(float *)&v20 = v7 * v43 + v8 * v46;
				v44 = v59 + *(float *)&v20;
				v47 = v60 + v16;
				v9 = sub_10015AD0(v29, v33, v38, v41);
				v10 = sub_10015AD0(v29, v33, v44, v47);
				v17 = (double)newImage->GetWidth() * 0.5;
				v24 = (double)newImage->GetHeight() * 0.5;
				*(float *)&v20 = v48 * -180.0 / PI;
				newImage->Rotate2(LODWORD(v20), 0, CxImage::IM_BILINEAR, CxImage::OM_BACKGROUND, 0, 1, 0);
				v49 = -v48;
				v21 = cos(v49);
				v50 = sin(v49);
				v30 = v29 - v17;
				v34 = v33 - v24;
				v18 = v50 * v30 + v34 * v21;
				v25 = -v50 * v34 + v30 * v21;
				v31 = (double)newImage->GetWidth() * 0.5 + v25;
				v35 = (double)newImage->GetHeight() * 0.5 + v18;
				newImage->Crop((int)v31, (int)v35, (int)v31 + v9, (int)v35 + v10, 0);
				newImage->Resample(120, 140, 1, 0);
				newImage->Save(a4, 1u);
				// v61[0] = &CxImage::`vftable';
				newImage->DestroyFrames();
				newImage->Destroy();
				return 0;
			}
			dword_1006DE5C = 1;
		}
		// delete newImage;
		newImage = NULL;
	}
	return -1;
}
//////////////////////////////////////////////////////////////////////KipFD_Detect()
int __cdecl sub_10018A00(
						 void *Src,
						 int a2,
						 int a3,
						 _DWORD *a4,
						 _DWORD *a5,
						 int a6,
						 int a7,
						 int a8,
						 int a9,
						 int a10,
						 _DWORD *a11)
{
	unsigned int v12; // edi
	unsigned int v13; // ebx
	int v14; // esi
	int v15; // [esp+0h] [ebp-184h]
	int v16; // [esp+0h] [ebp-184h]
	int v17; // [esp+4h] [ebp-180h]
	int v18; // [esp+4h] [ebp-180h]
	void **v19; // [esp+14h] [ebp-170h] BYREF
	int v20; // [esp+18h] [ebp-16Ch]
	int v21; // [esp+1Ch] [ebp-168h]
	float v22; // [esp+20h] [ebp-164h]
	int v23; // [esp+28h] [ebp-15Ch]
	int v24[2]; // [esp+2Ch] [ebp-158h] BYREF
	int v25; // [esp+180h] [ebp-4h]

	if ( !a11 )
		return 1;
	/*v19 = &vtk_DCR::`vftable';
		sub_10017580();
	v25 = 0;
	sub_1002D5E0(Src, a3);
	(*(void (__thiscall **)(_DWORD *, void ***))(*a11 + 12))(a11, &v19);
	v12 = a4[4];
	v21 = 0;
	if ( a4[3] > v12 )
		_invalid_parameter_noinfo();
	v13 = a4[3];
	v22 = *(float *)a4;
	if ( v13 > a4[4] )
		_invalid_parameter_noinfo();
	sub_10019C10(*a4, v13, LODWORD(v22), v12);
	v24[1] = 0x80000000;
	while ( 1 )
	{
		sub_1002D540(v15, v17);
		v14 = v20;
		sub_10010450();
		sub_10001F10(v24);
		if ( !v23 )
			break;
		(*(void (__thiscall **)(_DWORD *, void ***))(a11[2] + 12))(a11 + 2, &v19);
		sub_1002D540(v16, v18);
		v22 = sub_100105B0(v20);
		if ( v22 >= 0.1000000014901161 )
		{
			sub_1002D680(&v19);
			sub_10019A40();
			++v21;
		}
		if ( v21 >= 1000 )
		{
			v14 = v20;
			break;
		}
	}
	v25 = -1;
	*a5 = v21;
	v19 = &vtk_DCR::`vftable';
		if ( v14 )
			(**(void (__thiscall ***)(int, int))(*(_DWORD *)(*(_DWORD *)(v14 + 4) + 4) + v14 + 4))(
			*(_DWORD *)(*(_DWORD *)(v14 + 4) + 4) + v14 + 4,
			1);
	return 0;*/
}

int sub_10019750(int *a1, void *Src, int a3, int a4)
{
	int v5; // [esp-18h] [ebp-20h]
	int v6; // [esp-14h] [ebp-1Ch]
	int v7; // [esp-10h] [ebp-18h]
	int v8; // [esp-Ch] [ebp-14h]
	int v9; // [esp-8h] [ebp-10h]
	int v10; // [esp-4h] [ebp-Ch]
	int v11; // [esp+4h] [ebp-4h] BYREF

	v5 = *a1;
	v6 = a1[1];
	v7 = a1[2];
	v8 = a1[3];
	v9 = a1[4];
	v10 = a1[5];
	v11 = 0;
	if ( sub_10018A00(Src, a3, a4, (_DWORD*)(a1 + 6), (_DWORD*)&v11, v5, v6, v7, v8, v9, (_DWORD*)v10) )
		return -1;
	else
		return v11;
}

int __cdecl KipFD_Detect(int a1, int *a2)
{
	int v2; // ebx
	int v3; // eax
	int v4; // eax
	int v5; // eax
	int v6; // edx
	int v7; // ecx
	int v8; // eax
	int v9; // ebx
	_BYTE *v10; // edi
	int v11; // eax
	int v12; // edx
	int v13; // ecx
	int v14; // eax
	int v15; // ebx
	_BYTE *v16; // edi
	int v17; // eax
	int v18; // edx
	int v19; // ecx
	int i; // edi
	int v21; // esi
	_BYTE *Src; // [esp+10h] [ebp-10h]
	int v24; // [esp+14h] [ebp-Ch]
	int v25; // [esp+14h] [ebp-Ch]
	int v26; // [esp+14h] [ebp-Ch]
	int v27; // [esp+18h] [ebp-8h]
	int v28; // [esp+18h] [ebp-8h]
	int v29; // [esp+1Ch] [ebp-4h]
	int v30; // [esp+1Ch] [ebp-4h]
	int v31; // [esp+1Ch] [ebp-4h]

	v2 = 0;
	if ( !a1 )
		return -1;
	if ( !a2 )
		return -1;
	v3 = *a2;
	if ( *a2 != 20 && v3 != 21 && v3 != 808466521 )
		return -1;
	if ( (int)sub_1002EDC0() > 2 || (int)sub_1002EDC0() <= 0 )
	{
		dword_1006DE5C = 1;
		return -1;
	}
	Src = (_BYTE*)operator new[](a2[1] * a2[2]);
	v4 = *a2;
	if ( *a2 == 20 )
	{
		v5 = a2[2];
		v6 = 0;
		v24 = 0;
		v29 = a2[3];
		v27 = 0;
		if ( v5 > 0 )
		{
			v7 = a2[1];
			do
			{
				v8 = a2[4] + v29 * (v5 - v6 - 1);
				v9 = 0;
				if ( v7 > 0 )
				{
					v10 = (_BYTE *)(v8 + 2);
					do
					{
						Src[v24] = (char)(43 * *v10 + 114 * *(v10 - 2) + 75 * *(v10 - 1)) / -24;
						v7 = a2[1];
						++v9;
						v10 += 3;
						++v24;
					}
					while ( v9 < v7 );
					v6 = v27;
				}
				v5 = a2[2];
				v27 = ++v6;
			}
			while ( v6 < v5 );
		}
	}
	else if ( v4 == 21 )
	{
		v30 = a2[3];
		v11 = a2[2];
		v12 = 0;
		v28 = 0;
		v25 = 0;
		if ( v11 > 0 )
		{
			v13 = a2[1];
			do
			{
				v14 = a2[4] + v30 * (v11 - v12 - 1);
				v15 = 0;
				if ( v13 > 0 )
				{
					v16 = (_BYTE *)(v14 + 2);
					do
					{
						Src[v28] = (char)(114 * *v16 + 43 * *(v16 - 2) + 75 * *(v16 - 1)) / -24;
						v13 = a2[1];
						++v15;
						v16 += 3;
						++v28;
					}
					while ( v15 < v13 );
					v12 = v25;
				}
				v11 = a2[2];
				v25 = ++v12;
			}
			while ( v12 < v11 );
		}
	}
	else if ( v4 == 808466521 )
	{
		v31 = a2[3];
		v17 = a2[2];
		v26 = 0;
		if ( v17 > 0 )
		{
			v18 = a2[1];
			do
			{
				v19 = 0;
				for ( i = a2[4] + v31 * (v17 - v26 - 1); v19 < v18; ++v2 )
				{
					Src[v2] = *(_BYTE *)(v19 + i);
					v18 = a2[1];
					++v19;
				}
				v17 = a2[2];
				++v26;
			}
			while ( v26 < v17 );
		}
	}
	v21 = sub_10019750((int*)Src, (void*)a2[1], a2[2], 0);
	operator delete[](Src);
	return v21;
}