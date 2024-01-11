// KIPFD.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "cximage/ximage.h"

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
	_DWORD v61[129]; // [esp+1D0h] [ebp-208h] BYREF

	if ( a1 && a2 && *(_DWORD *)a2 == 20 && (int)sub_100197C0(&v51) > 0 )
	{
		CxImage::CxImage((CxImage *)v61, 0);
		if ( CxImage::CreateFromArray(
			(CxImage *)v61,
			*(unsigned __int8 **)(a2 + 16),
			*(_DWORD *)(a2 + 4),
			*(_DWORD *)(a2 + 8),
			0x18u,
			*(_DWORD *)(a2 + 12),
			0) )
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
				sub_10015B10(v55, v56, v57, v58);
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
				v17 = (double)CxImage::GetWidth((CxImage *)v61) * 0.5;
				v24 = (double)CxImage::GetHeight((CxImage *)v61) * 0.5;
				*(float *)&v20 = v48 * -180.0 / 3.141592741012573;
				CxImage::Rotate2(v61, LODWORD(v20), 0, 2, 2, 0, 1, 0);
				v49 = -v48;
				v21 = cos(v49);
				v50 = sin(v49);
				v30 = v29 - v17;
				v34 = v33 - v24;
				v18 = v50 * v30 + v34 * v21;
				v25 = -v50 * v34 + v30 * v21;
				v31 = (double)CxImage::GetWidth((CxImage *)v61) * 0.5 + v25;
				v35 = (double)CxImage::GetHeight((CxImage *)v61) * 0.5 + v18;
				CxImage::Crop((CxImage *)v61, (int)v31, (int)v35, (int)v31 + v9, (int)v35 + v10, 0);
				CxImage::Resample((CxImage *)v61, 120, 140, 1, 0);
				CxImage::Save((CxImage *)v61, a4, 1u);
				v61[0] = &CxImage::`vftable';
				CxImage::DestroyFrames((CxImage *)v61);
				CxImage::Destroy((CxImage *)v61);
				return 0;
			}
			dword_1006DE5C = 1;
		}
		CxImage::~CxImage((CxImage *)v61);
	}
	return -1;
}