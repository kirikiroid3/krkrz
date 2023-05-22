//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// tjs common header
//---------------------------------------------------------------------------


/*
	Add headers that would not be frequently changed.
*/
#ifndef tjsCommHeadH
#define tjsCommHeadH

#pragma comment (lib, "strmbase.lib")
#pragma comment (lib, "strmbasd.lib")

#pragma comment (lib, "kernel32.lib")
#pragma comment (lib, "user32.lib")
#pragma comment (lib, "gdi32.lib")
#pragma comment (lib, "comdlg32.lib")
#pragma comment (lib, "advapi32.lib")
#pragma comment (lib, "shell32.lib")
#pragma comment (lib, "ole32.lib")
#pragma comment (lib, "oleaut32.lib")
#pragma comment (lib, "uuid.lib")
#pragma comment (lib, "odbc32.lib")
#pragma comment (lib, "odbccp32.lib")
#pragma comment (lib, "winmm.lib")
#pragma comment (lib, "dsound.lib")
#pragma comment (lib, "version.lib")
#pragma comment (lib, "mpr.lib")
#pragma comment (lib, "shlwapi.lib")
#pragma comment (lib, "vfw32.lib")
#pragma comment (lib, "imm32.lib")

#pragma comment (lib, "libpng16.lib")
#pragma comment (lib, "onig_s.lib")
#pragma comment (lib, "freetype.lib")
#pragma comment (lib, "jpeg.lib")
#pragma comment (lib, "jpegxr.lib")
#pragma comment (lib, "jxrglue.lib")
#pragma comment (lib, "zlib.lib")
#pragma comment (lib, "turbojpeg.lib")


#ifdef __WIN32__
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include "targetver.h"
#include <windows.h>
#include <intrin.h>
#include <vector>


#ifdef  _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define TJS_CRTDBG_MAP_ALLOC
#endif  // _DEBUG

/*
#ifndef DEBUG_NEW
#ifdef  _DEBUG
#define DEBUG_NEW   ::new(_NORMAL_BLOCK, __FILE__, __LINE__)
#else   // _DEBUG
#define DEBUG_NEW   new
#endif  // _DEBUG
#endif  // DEBUG_NEW
#define new DEBUG_NEW
*/

#endif


#include <string.h>
#ifndef __USE_UNIX98
#define __USE_UNIX98
#endif
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include <vector>
#include <string>
#include <stdexcept>

#include "tjsConfig.h"
#include "tjs.h"

//---------------------------------------------------------------------------
#endif


