#include "stdhdrs.h"
#include <commctrl.h>
#include "./res/resource.h"
#pragma comment(lib, "Comctl32.lib")

#if defined _M_IX86
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#ifndef UlTRAVNCMESSAGEBOX_H__
#define UlTRAVNCMESSAGEBOX_H__
#pragma once

extern char str50275[128];
extern char str50276[128];
extern char str50277[128];
extern char str50278[128];
extern char str50279[128];
extern char str50280[128];
extern char str50281[128];
extern char str50282[128];
extern char str50283[128];
extern char str50284[128];
extern char str50285[128];
extern char str50286[128];
extern char str50287[128];
extern char str50288[128];

bool yesnoBox(HINSTANCE hInst, HWND m_hWnd, char* szHeader, char* body, char* okStr, char* cancelStr, char* checkbox, BOOL &bCheckboxChecked);
void loadStrings(HINSTANCE m_hInstResDLL);
#endif