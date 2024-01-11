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