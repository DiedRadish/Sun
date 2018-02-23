/*********************************************************
* EGE (Easy Graphics Engine)
* FileName      ege.h
* HomePage1     http://misakamm.github.com/xege
* HomePage2     http://misakamm.bitbucket.org/index.htm
* teiba1        http://tieba.baidu.com/f?kw=ege
* teiba2        http://tieba.baidu.com/f?kw=ege%C4%EF
* Blog:         http://misakamm.com
* E-Mail:       mailto:misakamm[at gmail com]
*
* FileName: ege.h
* ï¿½ï¿½ VC ï¿½ï¿½Ä£ï¿½ï¿½ Borland BGI ï¿½ï¿½Í¼ï¿½â£¬Êµï¿½Ö¼òµ¥µÄ»ï¿½Í¼Ö®ï¿½à£¬ï¿½ï¿½Õ¹ï¿½Ë½Ï¸ï¿½ï¿½ÓµÄ»ï¿½Í¼ï¿½ï¿½ï¿½ï¿½
*
* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¹ï¿½Ã±ï¿½ï¿½ï¿½Ê±ï¿½ï¿½ï¿½ï¿½Òªï¿½ï¿½ï¿½ï¿½conio.hÍ·ï¿½Ä¼ï¿½
* ï¿½ï¿½Ð©Í·ï¿½Ä¼ï¿½ï¿½ï¿½Ó¦ï¿½ï¿½ï¿½æ£¬ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ü»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
* ï¿½ï¿½ï¿½ï¿½getchï¿½ï¿½conio.hï¿½ÚµÄ¸ï¿½ï¿½Ç£ï¿½ï¿½É°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×¢ï¿½ï¿�?¤7
* ï¿½ï¿½ï¿½è¹²ï¿½æ£¬ï¿½ï¿½Ê¹ï¿½Ã¶ï¿½ï¿½Ä¼ï¿½ï¿½Ö¿ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä£Ê½Ê¹ï¿½Ã£ï¿½
* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ò»ï¿½ï¿½cppÍ¬Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô·Ö¿ï¿½ï¿½ï¿½ï¿½ï¿½
* Ê¹ï¿½Ã±ï¿½ï¿½â£¬ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½C++ï¿½ï¿½ï¿½ë£¬ï¿½ï¿½Ö§ï¿½ÖµÄ±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
* VC6/VC2008/VC2010/VC2012/VC2013/MinGW3.4.5/MinGW4.7.1/MinGW4.8.1
*********************************************************/

/****************************************************************************
** ×¢ï¿½ï¿½ï¿½ï¿½ï¿½î£º
* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Òªï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½Ì¨ï¿½ï¿½ï¿½Ú£ï¿½ï¿½ï¿½ï¿½Ú°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä¼ï¿½ï¿½ï¿½Ç°ï¿½ï¿½ï¿½Ò»ï¿½ï¿½define SHOW_CONSOLE
* ï¿½ï¿½ï¿½ï¿½ï¿½Sleepï¿½ï¿½ï¿½APIÊ±ï¿½ï¿½ï¿½ï¿½ï¿½ßµï¿½ï¿½ï¿½delayï¿½ï¿½Êµï¿½Ê¾ï¿½ï¿½ï¿½×ªï¿½ï¿½Îªï¿½ï¿½ï¿½ï¿½delay_msï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½APIï¿½ï¿½Ê¹ï¿½ï¿½api_sleep
* ï¿½ï¿½delay_ms(0)ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð¶ï¿½ï¿½ï¿½Ã»ï¿½Ð¸ï¿½ï¿½ÂµÄ±ï¿½Òªï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Îµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Äµï¿½ï¿½Ã²ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö¡ï¿½Êµï¿½Ó°ï¿½ï¿½
* ï¿½ï¿½ï¿½ï¿½ï¿½delay_ms, delay_fps, getch, getkey, getmouse Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ý¿ï¿½ï¿½Ü»ï¿½ï¿½ï¿½Â£ï¿½ï¿½ï¿½Ð©ï¿½ï¿½ï¿½ï¿½ï¿½àµ±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½delay_ms(0)ï¿½ï¿½
*   ï¿½ï¿½ï¿½ï¿½ï¿½Ö»ï¿½ï¿½Òªï¿½ï¿½ï¿½Â´ï¿½ï¿½Ú£ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½È´ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½delay_ms(0)ï¿½ï¿½×¢ï¿½ï¿½delayÖ»ï¿½ï¿½Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Â´ï¿½ï¿½ï¿½
* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¹ï¿½ï¿½delay_ms/delay_fpsï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô¼ï¿½ï¿½ï¿½ï¿½ï¿½Ä³ï¿½ï¿½ï¿½Õ¼ï¿½Ãµï¿½CPUï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ò»ï¿½ï¿½ï¿½ï¿½Ã»ï¿½Ðµï¿½ï¿½ï¿½Í¬Ê±Ò²Ã»ï¿½ï¿½getch/getmouseï¿½Ä»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Õ¼ï¿½ï¿½Ò»ï¿½ï¿½CPUï¿½ï¿½Ê±ï¿½ï¿½
****************************************************************************/

#ifndef _EGE_H_
#define _EGE_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#ifdef _GRAPH_LIB_BUILD_
#ifndef WINVER
#define WINVER 0x0400           // Specifies that the minimum required platform is Windows 95/NT4.
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400     // Specifies that the minimum required platform is Windows 95/NT4.
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410   // Specifies that the minimum required platform is Windows 98.
#endif
#endif

#ifndef __cplusplus
#error You must use C++ compiler, or you need filename with '.cpp' suffix
#endif

#if defined(_INC_CONIO) || defined(_CONIO_H_)
#error can not include "conio.h" before "graphics.h"
#endif

#if defined(_MSC_VER)
#	pragma warning(disable: 4355)
#	ifndef _ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH
#		define _ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH
#	endif
#	ifndef _ALLOW_RUNTIME_LIBRARY_MISMATCH
#		define _ALLOW_RUNTIME_LIBRARY_MISMATCH
#	endif
#endif

#pragma comment(lib,"graphics17x86.lib")

#if !defined(_GRAPH_LIB_BUILD_) && !defined(_GRAPH_NO_LIB_)
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifndef _CRT_NON_CONFORMING_SWPRINTFS
#define _CRT_NON_CONFORMING_SWPRINTFS
#endif

#endif

#include "windows.h"

#if defined(_MSC_VER) && _MSC_VER <= 1200 && !defined(SetWindowLongPtr)
#	define SetWindowLongPtrW   SetWindowLongW
#	define GetWindowLongPtrW   GetWindowLongW
#	define GWLP_USERDATA       GWL_USERDATA
#	define GWLP_WNDPROC        GWL_WNDPROC
#endif

#if !defined(_GRAPH_LIB_BUILD_) && !defined(_GRAPH_NO_LIB_)
#if defined(_MSC_VER) && _MSC_VER > 1200
//#	pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' ""version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


#ifndef WM_MOUSEWHEEL
#define WM_MOUSEWHEEL                   0x020A
#endif

#ifdef _GRAPH_LIB_BUILD_
#include <cstdio>
#endif

#ifndef _Cdecl
#	if __STDC__
#		define _Cdecl  __cdecl
#	else
#		define _Cdecl  __cdecl
#	endif
#endif

#ifdef _MSC_VER
#	if defined(_WIN64)
#		define EGEAPI
#	else
#		define EGEAPI _Cdecl
#	endif
#else
#	if defined(__WORDSIZE)
#		if __WORDSIZE > 32
#			define EGEAPI
#		else
#			define EGEAPI _Cdecl
#		endif
#	else
#		define EGEAPI
#	endif
#endif

#ifdef _GRAPH_LIB_BUILD_
#	define EGE_DEPRECATE(text)
#else
#	ifdef _MSC_VER
#		ifdef _CRT_DEPRECATE_TEXT
#			define EGE_DEPRECATE(text) _CRT_DEPRECATE_TEXT("This function is deprecated, more info visit http://tcgraphics.sourceforge.net/")
#		else
#			define EGE_DEPRECATE(text)
#		endif
#	else
#		define EGE_DEPRECATE(text) __attribute__((deprecated))
#	endif
#endif

#define SHOWCONSOLE             1       // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½Ä£Ê½Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ì¨ï¿½ï¿½ï¿½ï¿½Ê�?¤7
#define RGBTOBGR(color)         ((((color) & 0xFF) << 16) | (((color) & 0xFF0000) >> 16) | ((color) & 0xFF00FF00))
#define EGERGB(r, g, b)         ( ((r)<<16) | ((g)<<8) | (b))
#define EGERGBA(r, g, b, a)     ( ((r)<<16) | ((g)<<8) | (b) | ((a)<<24) )
#define EGEARGB(a, r, g, b)     ( ((r)<<16) | ((g)<<8) | (b) | ((a)<<24) )
#define EGEACOLOR(a, color)     ( ((color) & 0xFFFFFF) | ((a)<<24) )
#define EGECOLORA(color, a)     ( ((color) & 0xFFFFFF) | ((a)<<24) )
#define EGEGET_R(c)             ( ((c)>>16) & 0xFF )
#define EGEGET_G(c)             ( ((c)>> 8) & 0xFF )
#define EGEGET_B(c)             ( ((c)) & 0xFF )
#define EGEGET_A(c)             ( ((c)>>24) & 0xFF )
#define EGEGRAY(gray)           ( ((gray)<<16) | ((gray)<<8) | (gray))
#define EGEGRAYA(gray, a)       ( ((gray)<<16) | ((gray)<<8) | (gray) | ((a)<<24) )
#define EGEAGRAY(a, gray)       ( ((gray)<<16) | ((gray)<<8) | (gray) | ((a)<<24) )
#define NAMESPACE_EGE_L         namespace ege {
#define NAMESPACE_EGE_R         }

NAMESPACE_EGE_L

const double PI = 3.1415926535897932384626;

enum graphics_drivers {     /* define graphics drivers */
	DETECT,         /* requests autodetection */
	CGA, MCGA, EGA, EGA64, EGAMONO, IBM8514,/* 1 - 6 */
	HERCMONO, ATT400, VGA, PC3270,          /* 7 - 10 */
	TRUECOLOR, TRUECOLORSIZE,
	CURRENT_DRIVER = -1
};

enum graphics_modes { /* graphics modes for each driver */
	CGAC0       = 0,  /* 320x200 palette 0; 1 page  */
	CGAC1       = 1,  /* 320x200 palette 1; 1 page  */
	CGAC2       = 2,  /* 320x200 palette 2: 1 page  */
	CGAC3       = 3,  /* 320x200 palette 3; 1 page  */
	CGAHI       = 4,  /* 640x200 1 page             */
	MCGAC0      = 0,  /* 320x200 palette 0; 1 page  */
	MCGAC1      = 1,  /* 320x200 palette 1; 1 page  */
	MCGAC2      = 2,  /* 320x200 palette 2; 1 page  */
	MCGAC3      = 3,  /* 320x200 palette 3; 1 page  */
	MCGAMED     = 4,  /* 640x200 1 page             */
	MCGAHI      = 5,  /* 640x480 1 page             */
	EGALO       = 0,  /* 640x200 16 color 4 pages   */
	EGAHI       = 1,  /* 640x350 16 color 2 pages   */
	EGA64LO     = 0,  /* 640x200 16 color 1 page    */
	EGA64HI     = 1,  /* 640x350 4 color  1 page    */
	EGAMONOHI   = 0,  /* 640x350 64K on card, 1 page - 256K on card, 4 pages */
	HERCMONOHI  = 0,  /* 720x348 2 pages            */
	ATT400C0    = 0,  /* 320x200 palette 0; 1 page  */
	ATT400C1    = 1,  /* 320x200 palette 1; 1 page  */
	ATT400C2    = 2,  /* 320x200 palette 2; 1 page  */
	ATT400C3    = 3,  /* 320x200 palette 3; 1 page  */
	ATT400MED   = 4,  /* 640x200 1 page             */
	ATT400HI    = 5,  /* 640x400 1 page             */
	VGALO       = 0,  /* 640x200 16 color 4 pages   */
	VGAMED      = 1,  /* 640x350 16 color 2 pages   */
	VGAHI       = 2,  /* 640x480 16 color 1 page    */
	PC3270HI    = 0,  /* 720x350 1 page             */
	IBM8514LO   = 0,  /* 640x480 256 colors         */
	IBM8514HI   = 1   /*1024x768 256 colors         */
};

enum graphics_errors {      /* graphresult error return codes */
	grOk                =   0,
	grNoInitGraph       =  -1,
	grNotDetected       =  -2,
	grFileNotFound      =  -3,
	grInvalidDriver     =  -4,
	grNoLoadMem         =  -5,
	grNoScanMem         =  -6,
	grNoFloodMem        =  -7,
	grFontNotFound      =  -8,
	grNoFontMem         =  -9,
	grInvalidMode       = -10,
	grError             = -11,   /* generic error */
	grIOerror           = -12,
	grInvalidFont       = -13,
	grInvalidFontNum    = -14,
	grInvalidVersion    = -18,
	grException         = 0x10,  /* ege error */
	grParamError        = 0x11,
	grInvalidRegion     = 0x12,
	grOutOfMemory       = 0x13,
	grNullPointer       = 0x14,
	grAllocError        = 0x15,
	grInvalidMemory     = 0xCDCDCDCD,
};

enum message_event {
	MSG_EVENT_UP            = 0x00,
	MSG_EVENT_DOWN          = 0x01,
	MSG_EVENT_CLICK         = 0x01,
	MSG_EVENT_DBCLICK       = 0x02,
	MSG_EVENT_MOVE          = 0x04,
	MSG_EVENT_WHEEL         = 0x10,
};

enum message_mouse {
	MSG_MOUSE_LEFT      = 0x01,
	MSG_MOUSE_RIGHT     = 0x02,
	MSG_MOUSE_MID       = 0x04,
};

// ï¿½ï¿½É«
enum COLORS {
	BLACK           = 0,
	BLUE            = EGERGB(0, 0, 0xA8),
	GREEN           = EGERGB(0, 0xA8, 0),
	CYAN            = EGERGB(0, 0xA8, 0xA8),
	RED             = EGERGB(0xA8, 0, 0),
	MAGENTA         = EGERGB(0xA8, 0, 0xA8),
	BROWN           = EGERGB(0xA8, 0xA8, 0),
	LIGHTGRAY       = EGERGB(0xA8, 0xA8, 0xA8),
	DARKGRAY        = EGERGB(0x54, 0x54, 0x54),
	LIGHTBLUE       = EGERGB(0x54, 0x54, 0xFC),
	LIGHTGREEN      = EGERGB(0x54, 0xFC, 0x54),
	LIGHTCYAN       = EGERGB(0x54, 0xFC, 0xFC),
	LIGHTRED        = EGERGB(0xFC, 0x54, 0x54),
	LIGHTMAGENTA    = EGERGB(0xFC, 0x54, 0xFC),
	YELLOW          = EGERGB(0xFC, 0xFC, 0x54),
	WHITE           = EGERGB(0xFC, 0xFC, 0xFC),
};

// ï¿½ï¿½ï¿½Ä£Ê�?¤7
enum fill_patterns {/* Fill patterns for get/setfillstyle */
	EMPTY_FILL,     /* fills area in background color */
	SOLID_FILL,     /* fills area in solid fill color */
	LINE_FILL,      /* --- fill */
	LTSLASH_FILL,   /* /// fill */
	SLASH_FILL,     /* /// fill with thick lines */
	BKSLASH_FILL,   /* \\\ fill with thick lines */
	LTBKSLASH_FILL, /* \\\ fill */
	HATCH_FILL,     /* light hatch fill */
	XHATCH_FILL,    /* heavy cross hatch fill */
	INTERLEAVE_FILL,/* interleaving line fill */
	WIDE_DOT_FILL,  /* Widely spaced dot fill */
	CLOSE_DOT_FILL, /* Closely spaced dot fill */
	USER_FILL       /* user defined fill */
};

enum text_just {        /* Horizontal and vertical justification
						for settextjustify */
	LEFT_TEXT   = 0,
	CENTER_TEXT = 1,
	RIGHT_TEXT  = 2,

	BOTTOM_TEXT = 0,
	/* CENTER_TEXT = 1,  already defined above */
	TOP_TEXT    = 2
};

enum line_styles {      /* Line styles for get/setlinestyle */
	SOLID_LINE      = PS_SOLID,
	CENTER_LINE     = PS_DASH,
	DOTTED_LINE     = PS_DOT,
	DASHED_LINE     = PS_DASHDOT,
	NULL_LINE       = PS_NULL,
	USERBIT_LINE    = PS_USERSTYLE,   /* User defined line style */
};

enum key_msg_flag {
	KEYMSG_CHAR_FLAG    = 2,
	KEYMSG_DOWN_FLAG    = 1,
	KEYMSG_UP_FLAG      = 1,

	KEYMSG_CHAR         = 0x40000,
	KEYMSG_DOWN         = 0x10000,
	KEYMSG_UP           = 0x20000,
	KEYMSG_FIRSTDOWN    = 0x80000,
};

enum music_state_flag {
	MUSIC_MODE_NOT_OPEN = 0x0,
	MUSIC_MODE_NOT_READY = 0x20C,
	MUSIC_MODE_PAUSE = 0x211,
	MUSIC_MODE_PLAY = 0x20E,
	MUSIC_MODE_STOP = 0x20D,
	MUSIC_MODE_OPEN = 0x212,
	MUSIC_MODE_SEEK = 0x210,
};

enum initmode_flag {
	INIT_NOBORDER       = 0x1,
	INIT_CHILD          = 0x2,
	INIT_TOPMOST        = 0x4,
	INIT_RENDERMANUAL   = 0x8,
	INIT_NOFORCEEXIT    = 0x10,
	INIT_WITHLOGO       = 0x100,
#if defined(_DEBUG) || defined(DEBUG)
	INIT_DEFAULT    = 0x0,
#else
	INIT_DEFAULT    = INIT_WITHLOGO,
#endif
	INIT_ANIMATION  = INIT_DEFAULT | INIT_RENDERMANUAL | INIT_NOFORCEEXIT,
};

enum rendermode_e {
	RENDER_AUTO,
	RENDER_MANUAL,
};

typedef enum key_code_e {
	key_mouse_l     = 0x01,
	key_mouse_r     = 0x02,
	key_mouse_m     = 0x04,
	key_back        = 0x08,
	key_tab         = 0x09,
	key_enter       = 0x0d,
	key_shift       = 0x10,
	key_control     = 0x11,
	key_menu        = 0x12,
	key_pause       = 0x13,
	key_capslock    = 0x14,
	key_esc         = 0x1b,
	key_space       = 0x20,

	key_pageup      = 0x21,
	key_pagedown    = 0x22,
	key_home        = 0x23,
	key_end         = 0x24,

	key_left        = 0x25,
	key_up          = 0x26,
	key_right       = 0x27,
	key_down        = 0x28,

	key_print       = 0x2a,
	key_snapshot    = 0x2c,
	key_insert      = 0x2d,
	key_delete      = 0x2e,

	key_0           = 0x30,
	key_1           = 0x31,
	key_2           = 0x32,
	key_3           = 0x33,
	key_4           = 0x34,
	key_5           = 0x35,
	key_6           = 0x36,
	key_7           = 0x37,
	key_8           = 0x38,
	key_9           = 0x39,

	key_A           = 0x41,
	key_Z           = 0x5a,
	key_win_l       = 0x5b,
	key_win_r       = 0x5c,

	key_sleep       = 0x5f,

	key_num0        = 0x60,
	key_num1        = 0x61,
	key_num2        = 0x62,
	key_num3        = 0x63,
	key_num4        = 0x64,
	key_num5        = 0x65,
	key_num6        = 0x66,
	key_num7        = 0x67,
	key_num8        = 0x68,
	key_num9        = 0x69,

	key_f1          = 0x70,
	key_f2          = 0x71,
	key_f3          = 0x72,
	key_f4          = 0x73,
	key_f5          = 0x74,
	key_f6          = 0x75,
	key_f7          = 0x76,
	key_f8          = 0x77,
	key_f9          = 0x78,
	key_f10         = 0x79,
	key_f11         = 0x7a,
	key_f12         = 0x7b,

	key_numlock     = 0x90,
	key_scrolllock  = 0x91,

	key_shift_l     = 0xa0,
	key_shift_r     = 0xa1,
	key_control_l   = 0xa2,
	key_control_r   = 0xa3,
	key_menu_l      = 0xa4,
	key_menu_r      = 0xa5,

	key_semicolon   = 0xba,
	key_plus        = 0xbb,
	key_comma       = 0xbc,
	key_minus       = 0xbd,
	key_period      = 0xbe,
	key_slash       = 0xbf,
	key_tilde       = 0xc0,
	key_lbrace      = 0xdb,
	key_backslash   = 0xdc,
	key_rbrace      = 0xdd,
	key_quote       = 0xde,

	key_ime_process = 0xe5,
}key_code_e;

typedef enum key_msg_e {
	key_msg_down    = 1,
	key_msg_up      = 2,
	key_msg_char    = 4,
}key_msg_e;
typedef enum key_flag_e {
	key_flag_shift  = 0x100,
	key_flag_ctrl   = 0x200,
}key_flag_e;

typedef enum mouse_msg_e {
	mouse_msg_down      = 0x10,
	mouse_msg_up        = 0x20,
	mouse_msg_move      = 0x40,
	mouse_msg_wheel     = 0x80,
}mouse_msg_e;
typedef enum mouse_flag_e {
	mouse_flag_left     = 1,
	mouse_flag_right    = 2,
	mouse_flag_mid      = 4,
	mouse_flag_shift    = 0x100,
	mouse_flag_ctrl     = 0x200,
}mouse_flag_e;

typedef enum pattern_type_e {
	pattern_none            = 0,
	pattern_lineargradient  = 1,
	pattern_pathgradient    = 2,
	pattern_texture         = 3,
}pattern_type_e;

typedef unsigned int color_t;

struct viewporttype {
	int left;
	int top;
	int right;
	int bottom;
	int clipflag;
};

struct textsettingstype {
	int font;
	int direction;
	int charsize;
	int horiz;
	int vert;
};

struct linestyletype {
	int linestyle;
	unsigned short upattern;
	int thickness;
};

typedef struct key_msg {
	int             key;
	key_msg_e       msg;
	unsigned int    flags;
}key_msg;

typedef struct mouse_msg {
	int             x;
	int             y;
	mouse_msg_e     msg;
	unsigned int    flags;
	int             wheel;
	bool is_left() { return (flags & mouse_flag_left) != 0; }
	bool is_right() { return (flags & mouse_flag_right) != 0; }
	bool is_mid() { return (flags & mouse_flag_mid) != 0; }
	bool is_down() { return msg == mouse_msg_down; }
	bool is_up() { return msg == mouse_msg_up; }
	bool is_move() { return msg == mouse_msg_move; }
	bool is_wheel() { return msg == mouse_msg_wheel; }
}mouse_msg;

typedef struct ege_point {
	float x;
	float y;
}ege_point;

typedef struct ege_rect {
	float x;
	float y;
	float w;
	float h;
}ege_rect;

typedef struct ege_colpoint {
	float   x;
	float   y;
	color_t color;
}ege_colpoint;

// ï¿½ï¿½ï¿½ï¿½ï¿½Ï�?¤7
#if defined(__GNUC__)
struct EGE_DEPRECATE(MOUSEMSG) MOUSEMSG {
#else
EGE_DEPRECATE(MOUSEMSG)
struct MOUSEMSG {
#endif
	UINT uMsg;              // ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½Ï�?¤7
	bool mkCtrl;            // Ctrl ï¿½ï¿½ï¿½Ç·ï¿½ï¿½ï¿½
	bool mkShift;           // Shift ï¿½ï¿½ï¿½Ç·ï¿½ï¿½ï¿½
	bool mkLButton;         // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ç·ï¿½ï¿½ï¿½
	bool mkMButton;         // ï¿½ï¿½ï¿½ï¿½Ð¼ï¿½ï¿½Ç·ï¿½ï¿½ï¿�?¤7
	bool mkRButton;         // ï¿½ï¿½ï¿½ï¿½Ò¼ï¿½ï¿½Ç·ï¿½ï¿½ï¿�?¤7
	short x;                // ï¿½ï¿½Ç°ï¿½ï¿½ï¿�?¤7 x ï¿½ï¿½ï¿½ï¿½
	short y;                // ï¿½ï¿½Ç°ï¿½ï¿½ï¿�?¤7 y ï¿½ï¿½ï¿½ï¿½
	short wheel;            // ï¿½ï¿½ï¿½ï¿½ï¿½Ö¹ï¿½ï¿½ï¿½Öµ(120Îªï¿½ï¿½ï¿½ï¿½)
};

struct msg_createwindow {
	HANDLE hEvent;
	HWND hwnd;
	LPCWSTR classname;
	DWORD style;
	DWORD exstyle;
	unsigned id;
	LPVOID param;
};


// ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
#define INITGRAPH(x, y) struct _initgraph_{_initgraph_(){initgraph(x, y);}\
	~_initgraph_(){closegraph();}}_g_initgraph_
#define INITGRAPH3(x, y, f) struct _initgraph_{_initgraph_(){initgraph(x, y, f);}\
	~_initgraph_(){closegraph();}}_g_initgraph_

//ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
#define MUSIC_ERROR  0xFFFFFFFF


typedef void (CALLBACK_PROC)();
typedef int (__stdcall MSG_KEY_PROC  )(void*, unsigned, int);
typedef int (__stdcall MSG_MOUSE_PROC)(void*, unsigned, int, int, int);
typedef CALLBACK_PROC       * LPCALLBACK_PROC;
typedef MSG_KEY_PROC        * LPMSG_KEY_PROC;
typedef MSG_MOUSE_PROC      * LPMSG_MOUSE_PROC;

/*
×¢ï¿½â£ºï¿½ï¿½ï¿½Âºï¿½ï¿½ï¿½ï¿½ï¿½×¢ï¿½Íºï¿½ï¿�?¤7'###'ï¿½Äºï¿½ï¿½ï¿½ï¿½ï¿½Ê¾Î´Êµï¿½ï¿½
*/

struct VECTOR3D;

// 3d ï¿½ï¿½ï¿½ã¸¨ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
void EGEAPI rotate_point3d_x(VECTOR3D  * pt, float r); //ï¿½ï¿½ï¿½È£ï¿½ï¿½ï¿½ï¿½Ö¶ï¿½ï¿½ï¿½
void EGEAPI rotate_point3d_y(VECTOR3D  * pt, float r);
void EGEAPI rotate_point3d_z(VECTOR3D  * pt, float r);

struct VECTOR3D {
	float x, y, z;
	VECTOR3D() {
		x = 0; y = 0; z = 0;
	}
	VECTOR3D(float _x, float _y) {
		x = _x; y = _y; z = 0;
	}
	VECTOR3D(float _x, float _y, float _z) {
		x = _x; y = _y; z = _z;
	}
	VECTOR3D& operator = (const VECTOR3D& _fp)  {
		x = _fp.x; y = _fp.y; z = _fp.z;
		return *this;
	}
	VECTOR3D& operator += (const VECTOR3D& _fp);
	VECTOR3D& operator -= (const VECTOR3D& _fp);
	VECTOR3D operator + (const VECTOR3D& _fp) const;
	VECTOR3D operator - (const VECTOR3D& _fp) const;
	VECTOR3D& operator *= (float f); //ï¿½ï¿½ï¿½ï¿½
	VECTOR3D operator * (float f) const; //ï¿½ï¿½ï¿½ï¿½
	float operator * (const VECTOR3D& _fp) const; //ï¿½ï¿½ï¿�?¤7
	VECTOR3D operator & (const VECTOR3D& _fp) const; //ï¿½ï¿½ï¿�?¤7
	VECTOR3D& operator &= (const VECTOR3D& _fp); //ï¿½ï¿½ï¿�?¤7
	float GetModule() const;
	float GetSqrModule() const {
		return float(x*x + y*y + z*z);
	}
	VECTOR3D& SetModule(float m) {
		float t = m / GetModule();
		*this *= t;
		return *this;
	}
	VECTOR3D& Rotate(float rad, const VECTOR3D& v); //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×ªï¿½ï¿½ï¿½ï¿½ï¿½Ö¶ï¿½ï¿½ï¿½radÎªï¿½ï¿½ï¿½ï¿½
	VECTOR3D& Rotate(float rad, float x, float y, float z) {
		VECTOR3D v(x, y, z);
		return Rotate(rad, v);
	}
	VECTOR3D& Rotate(const VECTOR3D& e, const VECTOR3D& s = VECTOR3D(0.0f, 0.0f, 1.0f)); //ï¿½ï¿½sï¿½ï¿½eÖ®ï¿½ï¿½Ä¼Ð½ï¿½È·ï¿½ï¿½ï¿½ï¿½×�?¤7
	static float GetAngel(const VECTOR3D& e, const VECTOR3D& s = VECTOR3D(0.0f, 0.0f, 1.0f));
};


class IMAGE;
typedef IMAGE *PIMAGE;

// ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Øºï¿½ï¿½ï¿�?¤7

void EGEAPI initgraph(int Width, int Height, int Flag = INIT_DEFAULT);    // ï¿½ï¿½Ê¼ï¿½ï¿½Í¼ï¿½Î»ï¿½ï¿½ï¿½
void EGEAPI initgraph(int* gdriver, int* gmode, char* path);   // ï¿½ï¿½ï¿½ï¿½ Borland C++ 3.1 ï¿½ï¿½ï¿½ï¿½ï¿½Ø£ï¿½Ö»Ê¹ï¿½ï¿½ 640x480x24bit
void EGEAPI closegraph();                                      // ï¿½Ø±ï¿½Í¼ï¿½Î»ï¿½ï¿½ï¿½
bool EGEAPI is_run();   // ï¿½Ð¶ï¿½UIï¿½Ç·ï¿½ï¿½Ë³ï¿½
void EGEAPI setcaption(LPCSTR  caption);
void EGEAPI setcaption(LPCWSTR caption);

void EGEAPI setrendermode(rendermode_e mode);

// ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
PIMAGE  gettarget();
int     settarget(PIMAGE pbuf); // ï¿½ï¿½ NULL ï¿½ï¿½ï¿½Ã´ï¿½ï¿½ï¿½Îªï¿½ï¿½Í¼Ä¿ï¿½ï¿½

void EGEAPI cleardevice(PIMAGE pimg = NULL);                   // ï¿½ï¿½ï¿½ï¿½

void EGEAPI getviewport(int *pleft, int *ptop, int *pright, int *pbottom, int *pclip = 0, PIMAGE pimg = NULL); // ï¿½ï¿½È¡ï¿½ï¿½Í¼ï¿½ï¿½Ï¢
void EGEAPI setviewport(int left, int top, int right, int bottom, int clip = 1, PIMAGE pimg = NULL);           // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í¼
void EGEAPI clearviewport(PIMAGE pimg = NULL);                                                                 // ï¿½ï¿½ï¿½ï¿½ï¿½Í�?¤7

EGE_DEPRECATE(setactivepage)
void EGEAPI setactivepage(int page); // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Í¼Ò³ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ä¬ï¿½Ïµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½å£¬ï¿½ï¿½Î�?¤70-1ï¿½ï¿½Ä¬ï¿½ï¿½Îª0
EGE_DEPRECATE(setvisualpage)
void EGEAPI setvisualpage(int page); // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Ê¾Ò³ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ïµï¿½Ò³ï¿½ï¿½ï¿½ï¿½Î§0-1ï¿½ï¿½Ä¬ï¿½ï¿½Îª0
EGE_DEPRECATE(swappage)
void EGEAPI swappage();
void EGEAPI window_getviewport(struct viewporttype * viewport);
void EGEAPI window_getviewport(int* left, int* top, int* right, int* bottom);
void EGEAPI window_setviewport(int  left, int  top, int  right, int  bottom);

// ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½
EGE_DEPRECATE(setactivepage)
void EGEAPI getlinestyle(int *plinestyle, unsigned short *pupattern = NULL, int *pthickness = NULL, PIMAGE pimg = NULL); // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½
void EGEAPI setlinestyle(int linestyle, unsigned short upattern = 0, int thickness = 1, PIMAGE pimg = NULL);          // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½ï¿½ï¿½
void EGEAPI setlinewidth(float width, PIMAGE pimg = NULL);          // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ß¿ï¿½
//EGE_DEPRECATE(setactivepage)
//void getfillstyle(color_t *pcolor, int *ppattern = NULL, PIMAGE pimg = NULL);           // ï¿½ï¿½È¡ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7 ###
EGE_DEPRECATE(setactivepage)
void EGEAPI setfillstyle(int pattern, color_t color, PIMAGE pimg = NULL);  // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7

void EGEAPI setwritemode(int mode, PIMAGE pimg = NULL);         // ï¿½ï¿½ï¿½Ã»ï¿½Í¼Î»ï¿½ï¿½ï¿½ï¿½Ä£Ê½

//void EGEAPI graphdefaults(PIMAGE pimg = NULL);                  // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð»ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ÎªÄ¬ï¿½ï¿½Öµ ###

// É«ï¿½Êºï¿½ï¿½ï¿½
color_t EGEAPI getcolor(PIMAGE pimg = NULL);                    // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½Í¼Ç°ï¿½ï¿½É«
color_t EGEAPI getfillcolor(PIMAGE pimg = NULL);                // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½Í¼ï¿½ï¿½ï¿½É�?¤7
color_t EGEAPI getbkcolor(PIMAGE pimg = NULL);                  // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½É«
void EGEAPI setcolor(color_t color, PIMAGE pimg = NULL);        // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Í¼Ç°ï¿½ï¿½É«
void EGEAPI setfillcolor(color_t color, PIMAGE pimg = NULL);    // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Í¼ï¿½ï¿½ï¿½É�?¤7
void EGEAPI setbkcolor(color_t color, PIMAGE pimg = NULL);      // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½É«ï¿½ï¿½ï¿½ï¿½ï¿½Ã²ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½É«ï¿½ï¿½ï¿½ï¿½ï¿½æ»»ï¿½ï¿½
void EGEAPI setbkcolor_f(color_t color, PIMAGE pimg = NULL);    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½É«ï¿½ï¿½Ö»ï¿½ï¿½ï¿½Ã²ï¿½ï¿½æ»­ï¿½ï¿½
void EGEAPI setfontbkcolor(color_t color, PIMAGE pimg = NULL);  // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½ï¿½Ö±ï¿½ï¿½ï¿½É«
void EGEAPI setbkmode(int iBkMode, PIMAGE pimg = NULL);         // ï¿½ï¿½ï¿½Ã±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä£Ê�?¤7(0=OPAQUE, 1=TRANSPARENT)
void EGEAPI setinitmode(int mode = INIT_DEFAULT, int x = CW_USEDEFAULT, int y = CW_USEDEFAULT); //ï¿½ï¿½ï¿½Ã³ï¿½Ê¼ï¿½ï¿½Ä£Ê½ï¿½ï¿½mode=0Îªï¿½ï¿½Í¨ï¿½ï¿½1Îªï¿½Þ±ß¿ò´°¿Ú£ï¿½xyï¿½Ç³ï¿½Ê¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
int  EGEAPI attachHWND(HWND hWnd);

// ï¿½ï¿½ï¿½Ýºï¿½
#define RGBtoGRAY   rgb2gray
#define RGBtoHSL    rgb2hsl
#define RGBtoHSV    rgb2hsv
#define HSLtoRGB    hsl2rgb
#define HSVtoRGB    hsv2rgb

// ï¿½ï¿½É«Ä£ï¿½ï¿½×ªï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
color_t     EGEAPI rgb2gray(color_t rgb);
void        EGEAPI rgb2hsl(color_t rgb, float *H, float *S, float *L);
void        EGEAPI rgb2hsv(color_t rgb, float *H, float *S, float *V);
color_t     EGEAPI hsl2rgb(float H, float S, float L);
color_t     EGEAPI hsv2rgb(float H, float S, float V);


// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½

color_t     EGEAPI getpixel  (int x, int y, PIMAGE pimg = NULL);                // ï¿½ï¿½È¡ï¿½ï¿½ï¿½ï¿½ï¿½É�?¤7
void        EGEAPI putpixel  (int x, int y, color_t color, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½ï¿½
color_t     EGEAPI getpixel_f(int x, int y, PIMAGE pimg = NULL);                // ï¿½ï¿½È¡ï¿½ï¿½ï¿½ï¿½ï¿½É�?¤7
void        EGEAPI putpixel_f(int x, int y, color_t color, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½ï¿½
void        EGEAPI putpixels  (int nPoint, int* pPoints, PIMAGE pimg = NULL);   // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
void        EGEAPI putpixels_f(int nPoint, int* pPoints, PIMAGE pimg = NULL);   // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

void EGEAPI moveto(int x, int y, PIMAGE pimg = NULL);                      // ï¿½Æ¶ï¿½ï¿½ï¿½Ç°ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)
void EGEAPI moverel(int dx, int dy, PIMAGE pimg = NULL);                   // ï¿½Æ¶ï¿½ï¿½ï¿½Ç°ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)

void EGEAPI line(int x1, int y1, int x2, int y2, PIMAGE pimg = NULL);      // ï¿½ï¿½ï¿½ï¿½
void EGEAPI linerel(int dx, int dy, PIMAGE pimg = NULL);                   // ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
void EGEAPI lineto(int x, int y, PIMAGE pimg = NULL);                      // ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)
void EGEAPI line_f(float x1, float y1, float x2, float y2, PIMAGE pimg = NULL);  // ï¿½ï¿½ï¿½ï¿½
void EGEAPI linerel_f(float dx, float dy, PIMAGE pimg = NULL);                   // ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
void EGEAPI lineto_f(float x, float y, PIMAGE pimg = NULL);                      // ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)


void EGEAPI rectangle(int left, int top, int right, int bottom, PIMAGE pimg = NULL);   // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

//void EGEAPI getarccoords(int *px, int *py, int *pxstart, int *pystart, int *pxend, int *pyend, PIMAGE pimg = NULL);    // ï¿½ï¿½È¡Ô²ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï¢ ###
void EGEAPI arc(int x, int y, int stangle, int endangle, int radius, PIMAGE pimg = NULL);                  // ï¿½ï¿½Ô²ï¿½ï¿½
void EGEAPI circle(int x, int y, int radius, PIMAGE pimg = NULL);                                          // ï¿½ï¿½Ô²
void EGEAPI pieslice(int x, int y, int stangle, int endangle, int radius, PIMAGE pimg = NULL);             // ï¿½ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius, PIMAGE pimg = NULL);// ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿½
void EGEAPI fillellipse(int x, int y, int xradius, int yradius, PIMAGE pimg = NULL);                       // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô�?¤7
void EGEAPI sector(int x, int y, int stangle, int endangle, int xradius, int yradius, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿�?¤7

void EGEAPI arcf(float x, float y, float stangle, float endangle, float radius, PIMAGE pimg = NULL);                    // ï¿½ï¿½Ô²ï¿½ï¿½
void EGEAPI circlef(float x, float y, float radius, PIMAGE pimg = NULL);                                                // ï¿½ï¿½Ô²
void EGEAPI pieslicef(float x, float y, float stangle, float endangle, float radius, PIMAGE pimg = NULL);               // ï¿½ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI ellipsef(float x, float y, float stangle, float endangle, float xradius, float yradius, PIMAGE pimg = NULL);// ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿½
void EGEAPI fillellipsef(float x, float y, float xradius, float yradius, PIMAGE pimg = NULL);                           // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô�?¤7
void EGEAPI sectorf(float x, float y, float stangle, float endangle, float xradius, float yradius, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô²ï¿½ï¿½ï¿½ï¿�?¤7

void EGEAPI bar(int left, int top, int right, int bottom, PIMAGE pimg = NULL);                             // ï¿½ï¿½ï¿½Þ±ß¿ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
void EGEAPI bar3d(int left, int top, int right, int bottom, int depth, int topflag, PIMAGE pimg = NULL);   // ï¿½ï¿½ï¿½Ð±ß¿ï¿½ï¿½ï¿½Î¬ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

void EGEAPI drawpoly(int numpoints, const int *polypoints, PIMAGE pimg = NULL);     // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI drawlines(int numlines, const int *polypoints, PIMAGE pimg = NULL);     // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ß£ï¿½ï¿½ï¿½Õ¹ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
void EGEAPI drawbezier(int numpoints, const int *polypoints, PIMAGE pimg = NULL);   // ï¿½ï¿½bezierï¿½ï¿½ï¿½ß£ï¿½ï¿½ï¿½Õ¹ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
void EGEAPI fillpoly(int numpoints, const int *polypoints, PIMAGE pimg = NULL);     // ï¿½ï¿½ï¿½ï¿½ï¿½Ä¶ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI fillpoly_gradient(int numpoints, const ege_colpoint* polypoints, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä¶ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI floodfill(int x, int y, int border, PIMAGE pimg = NULL);                // ï¿½ï¿½ï¿½ß½ï¿½ï¿½ï¿½É«ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI floodfillsurface(int x, int y, color_t areacolor, PIMAGE pimg = NULL);  // ï¿½ï¿½ï¿½ï¿½Ê¼ï¿½ï¿½ï¿½ï¿½É«ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7

// ï¿½ß¼ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½AAï¿½ï¿½
// ege new_api
void EGEAPI ege_enable_aa(bool enable, PIMAGE pimg = NULL);

void EGEAPI ege_line(float x1, float y1, float x2, float y2, PIMAGE pimg = NULL);
void EGEAPI ege_drawpoly(int numpoints, ege_point* polypoints, PIMAGE pimg = NULL);
void EGEAPI ege_drawcurve(int numpoints, ege_point* polypoints, PIMAGE pimg = NULL);
void EGEAPI ege_rectangle(float x, float y, float w, float h, PIMAGE pimg = NULL);
void EGEAPI ege_ellipse(float x, float y, float w, float h, PIMAGE pimg = NULL);
void EGEAPI ege_pie(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg = NULL);

void EGEAPI ege_arc(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg = NULL);
void EGEAPI ege_bezier(int numpoints, ege_point* polypoints, PIMAGE pimg = NULL);

void EGEAPI ege_fillpoly(int numpoints, ege_point* polypoints, PIMAGE pimg = NULL);
void EGEAPI ege_fillrect(float x, float y, float w, float h, PIMAGE pimg = NULL);
void EGEAPI ege_fillellipse(float x, float y, float w, float h, PIMAGE pimg = NULL);
void EGEAPI ege_fillpie(float x, float y, float w, float h, float stangle, float sweepAngle, PIMAGE pimg = NULL);

void EGEAPI ege_setpattern_none(PIMAGE pimg = NULL);
void EGEAPI ege_setpattern_lineargradient(float x1, float y1, color_t c1, float x2, float y2, color_t c2, PIMAGE pimg = NULL);
void EGEAPI ege_setpattern_pathgradient(ege_point center, color_t centercolor,
	int count, ege_point* points, int colcount, color_t* pointscolor, PIMAGE pimg = NULL);
void EGEAPI ege_setpattern_ellipsegradient(ege_point center, color_t centercolor,
	float x, float y, float w, float h, color_t color, PIMAGE pimg = NULL);
void EGEAPI ege_setpattern_texture(PIMAGE srcimg, float x, float y, float w, float h, PIMAGE pimg = NULL);

void EGEAPI ege_setalpha(int alpha, PIMAGE pimg = NULL);
void EGEAPI ege_gentexture(bool gen, PIMAGE pimg = NULL);
void EGEAPI ege_puttexture(PIMAGE srcimg, float x, float y, float w, float h, PIMAGE pimg = NULL);
void EGEAPI ege_puttexture(PIMAGE srcimg, ege_rect dest, PIMAGE pimg = NULL);
void EGEAPI ege_puttexture(PIMAGE srcimg, ege_rect dest, ege_rect src, PIMAGE pimg = NULL);
//

//int  EGEAPI Begin2d();
//void EGEAPI EndRender();

//Ê±ï¿½äº¯ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Âºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ú¶ï¿½ï¿½ß³ï¿½ï¿½ï¿½Ê¹ï¿½Ã£ï¿½Ö»ï¿½Ü¸ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ß³Ìµï¿½ï¿½Ã£ï¿½
void EGEAPI ege_sleep(long ms);     // ï¿½ï¿½ï¿½ï¿½ï¿½Ó³ï¿½msï¿½ï¿½ï¿½ï¿½
void EGEAPI delay(long ms);         // ï¿½ï¿½ï¿½ï¿½ï¿½Ó³ï¿½msï¿½ï¿½ï¿½ï¿½
void EGEAPI delay_ms(long ms);      // Æ½ï¿½ï¿½ï¿½Ó³ï¿½msï¿½ï¿½ï¿½ï¿½
void EGEAPI delay_fps(int fps);    // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½ï¿½
void EGEAPI delay_fps(long fps);    // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½ï¿½
void EGEAPI delay_fps(double fps);  // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½ï¿½
void EGEAPI delay_jfps(int fps);   // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½ï¿½ß¼ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½Æ£ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ö¡
void EGEAPI delay_jfps(long fps);   // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½ï¿½ß¼ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½Æ£ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ö¡
void EGEAPI delay_jfps(double fps); // Æ½ï¿½ï¿½ï¿½Ó³ï¿½1000/fpsï¿½ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½ï¿½ï¿½È¶ï¿½ï¿½ß¼ï¿½Ö¡ï¿½Ê¿ï¿½ï¿½Æ£ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ö¡
// ï¿½ï¿½ï¿½Âºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô¶ï¿½ï¿½ß³ï¿½ï¿½ï¿½Ê¹ï¿½Ã£ï¿½ï¿½ï¿½Í¼ï¿½ï¿½(worker)ï¿½ß³Ìµï¿½sleepÊ¹ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI api_sleep(long dwMilliseconds);
double EGEAPI fclock(); // ï¿½ï¿½È¡ï¿½ï¿½ï¿½ï¿½Îªï¿½ï¿½Î»ï¿½Ä¸ï¿½ï¿½ï¿½Ê±ï¿½ä£¬Ö»ï¿½ï¿½ï¿½Ú¼ï¿½Ê±ï¿½Ã£ï¿½ï¿½ï¿½ï¿½ï¿½0.01ï¿½ë£¬

// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Øºï¿½ï¿½ï¿�?¤7
void EGEAPI outtext(LPCSTR  textstring, PIMAGE pimg = NULL);                   // ï¿½Úµï¿½Ç°Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI outtext(LPCWSTR textstring, PIMAGE pimg = NULL);                   // ï¿½Úµï¿½Ç°Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI outtext(CHAR  c, PIMAGE pimg = NULL);                              // ï¿½Úµï¿½Ç°Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö·ï¿�?¤7
void EGEAPI outtext(WCHAR c, PIMAGE pimg = NULL);                              // ï¿½Úµï¿½Ç°Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö·ï¿�?¤7
void EGEAPI outtextxy(int x, int y, LPCSTR  textstring, PIMAGE pimg = NULL);   // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI outtextxy(int x, int y, LPCWSTR textstring, PIMAGE pimg = NULL);   // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI outtextxy(int x, int y, CHAR c, PIMAGE pimg = NULL);               // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö·ï¿�?¤7
void EGEAPI outtextxy(int x, int y, WCHAR c, PIMAGE pimg = NULL);              // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö·ï¿�?¤7
void EGEAPI outtextrect(int x, int y, int w, int h, LPCSTR  textstring, PIMAGE pimg = NULL); // ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½Î·ï¿½Î§ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI outtextrect(int x, int y, int w, int h, LPCWSTR textstring, PIMAGE pimg = NULL); // ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½Î·ï¿½Î§ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void EGEAPI xyprintf(int x, int y, LPCSTR  fmt, ...); // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½Í¼Ä¿ï¿½ï¿½ï¿½ï¿½ï¿½settarget
void EGEAPI xyprintf(int x, int y, LPCWSTR fmt, ...); // ï¿½ï¿½Ö¸ï¿½ï¿½Î»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½Í¼Ä¿ï¿½ï¿½ï¿½ï¿½ï¿½settarget
void EGEAPI rectprintf(int x, int y, int w, int h, LPCSTR  fmt, ...); // ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½Í¼Ä¿ï¿½ï¿½ï¿½ï¿½ï¿½settarget
void EGEAPI rectprintf(int x, int y, int w, int h, LPCWSTR fmt, ...); // ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½Ö¸ï¿½ï¿½ï¿½ï¿½Í¼Ä¿ï¿½ï¿½ï¿½ï¿½ï¿½settarget
int  EGEAPI textwidth(LPCSTR  textstring, PIMAGE pimg = NULL);                 // ï¿½ï¿½È¡ï¿½Ö·ï¿½ï¿½ï¿½Õ¼ï¿½Ãµï¿½ï¿½ï¿½ï¿½Ø¿ï¿½
int  EGEAPI textwidth(LPCWSTR textstring, PIMAGE pimg = NULL);                 // ï¿½ï¿½È¡ï¿½Ö·ï¿½ï¿½ï¿½Õ¼ï¿½Ãµï¿½ï¿½ï¿½ï¿½Ø¿ï¿½
int  EGEAPI textwidth(CHAR  c, PIMAGE pimg = NULL);
int  EGEAPI textwidth(WCHAR c, PIMAGE pimg = NULL);
int  EGEAPI textheight(LPCSTR  textstring, PIMAGE pimg = NULL);                // ï¿½ï¿½È¡ï¿½Ö·ï¿½ï¿½ï¿½Õ¼ï¿½Ãµï¿½ï¿½ï¿½ï¿½Ø¸ï¿½
int  EGEAPI textheight(LPCWSTR textstring, PIMAGE pimg = NULL);                // ï¿½ï¿½È¡ï¿½Ö·ï¿½ï¿½ï¿½Õ¼ï¿½Ãµï¿½ï¿½ï¿½ï¿½Ø¸ï¿½
int  EGEAPI textheight(CHAR  c, PIMAGE pimg = NULL);
int  EGEAPI textheight(WCHAR c, PIMAGE pimg = NULL);
void EGEAPI settextjustify(int horiz, int vert, PIMAGE pimg = NULL);

// ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½(ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
//      nHeight: ï¿½Ö·ï¿½ï¿½ï¿½Æ½ï¿½ï¿½ï¿½ß¶È£ï¿½
//      nWidth: ï¿½Ö·ï¿½ï¿½ï¿½Æ½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7(0 ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½Ó¦)ï¿½ï¿½
//      lpszFace: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Æ£ï¿½
//      nEscapement: ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð´ï¿½Ç¶ï¿½(ï¿½ï¿½Î» 0.1 ï¿½ï¿½)ï¿½ï¿½
//      nOrientation: Ã¿ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½Ð´ï¿½Ç¶ï¿½(ï¿½ï¿½Î» 0.1 ï¿½ï¿½)ï¿½ï¿½
//      nWeight: ï¿½Ö·ï¿½ï¿½Ä±Ê»ï¿½ï¿½ï¿½Ï¸(0 ï¿½ï¿½Ê¾Ä¬ï¿½Ï´ï¿½Ï¸)ï¿½ï¿½
//      bItalic: ï¿½Ç·ï¿½Ð±ï¿½å£»
//      bUnderline: ï¿½Ç·ï¿½ï¿½Â»ï¿½ï¿½ß£ï¿½
//      bStrikeOut: ï¿½Ç·ï¿½É¾ï¿½ï¿½ï¿½ß£ï¿½
//      fbCharSet: Ö¸ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½ï¿½
//      fbOutPrecision: Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½Öµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½È£ï¿�?¤7
//      fbClipPrecision: Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½ÖµÄ¼ï¿½ï¿½ï¿½È£ï¿�?¤7
//      fbQuality: Ö¸ï¿½ï¿½ï¿½ï¿½ï¿½Öµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
//      fbPitchAndFamily: Ö¸ï¿½ï¿½ï¿½Ô³ï¿½ï¿½æ·½Ê½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ïµï¿½Ð¡ï¿�?¤7
void EGEAPI setfont(int nHeight, int nWidth, LPCSTR lpszFace,  PIMAGE pimg = NULL);
void EGEAPI setfont(int nHeight, int nWidth, LPCWSTR lpszFace, PIMAGE pimg = NULL);
void EGEAPI setfont(int nHeight, int nWidth, LPCSTR lpszFace,  int nEscapement, int nOrientation,
					int nWeight, int bItalic, int bUnderline, int bStrikeOut, PIMAGE pimg = NULL);
void EGEAPI setfont(int nHeight, int nWidth, LPCWSTR lpszFace, int nEscapement, int nOrientation,
					int nWeight, int bItalic, int bUnderline, int bStrikeOut, PIMAGE pimg = NULL);
void EGEAPI setfont(int nHeight, int nWidth, LPCSTR lpszFace,  int nEscapement, int nOrientation,
					int nWeight, int bItalic, int bUnderline, int bStrikeOut, BYTE fbCharSet,
					BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily, PIMAGE pimg = NULL);
void EGEAPI setfont(int nHeight, int nWidth, LPCWSTR lpszFace, int nEscapement, int nOrientation,
					int nWeight, int bItalic, int bUnderline, int bStrikeOut, BYTE fbCharSet,
					BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily, PIMAGE pimg = NULL);
void EGEAPI setfont(const LOGFONTA *font, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½
void EGEAPI setfont(const LOGFONTW *font, PIMAGE pimg = NULL); // ï¿½ï¿½ï¿½Ãµï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½
void EGEAPI getfont(LOGFONTA *font, PIMAGE pimg = NULL);       // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½
void EGEAPI getfont(LOGFONTW *font, PIMAGE pimg = NULL);       // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê½


//Í¼Æ¬ï¿½ï¿½ï¿½ï¿½
#define getmaxx getwidth
#define getmaxy getheight

int EGEAPI getwidth(PIMAGE pimg = NULL);           // ï¿½ï¿½È¡Í¼Æ¬ï¿½ï¿½ï¿�?¤7
int EGEAPI getheight(PIMAGE pimg = NULL);          // ï¿½ï¿½È¡Í¼Æ¬ï¿½ß¶ï¿½
int EGEAPI getx(PIMAGE pimg = NULL);               // ï¿½ï¿½È¡ï¿½ï¿½Ç° x ï¿½ï¿½ï¿½ï¿½
int EGEAPI gety(PIMAGE pimg = NULL);               // ï¿½ï¿½È¡ï¿½ï¿½Ç° y ï¿½ï¿½ï¿½ï¿½

PIMAGE      EGEAPI newimage(); // ï¿½ï¿½ï¿½ï¿½PIMAGE
PIMAGE      EGEAPI newimage(int width, int height); // ï¿½ï¿½ï¿½ï¿½PIMAGE
void        EGEAPI delimage(PIMAGE pImg); // ï¿½ï¿½ï¿½ï¿½PIMAGE
color_t*    EGEAPI getbuffer(PIMAGE pImg);

int  EGEAPI resize(PIMAGE pDstImg, int width, int height); //ï¿½ï¿½ï¿½ï¿½ß´ï¿�?¤7
void EGEAPI getimage(PIMAGE pDstImg, int srcX, int srcY, int srcWidth, int srcHeight);             // ï¿½ï¿½ï¿½ï¿½Ä»ï¿½ï¿½È¡Í¼ï¿½ï¿½
void EGEAPI getimage(PIMAGE pDstImg, const PIMAGE pSrcImg, int srcX, int srcY, int srcWidth, int srcHeight);   // ï¿½ï¿½ï¿½ï¿½Ò»ï¿½ï¿½ PIMAGE ï¿½ï¿½ï¿½ï¿½ï¿½Ð»ï¿½È¡Í¼ï¿½ï¿½
int  EGEAPI getimage(PIMAGE pDstImg, LPCSTR  pImgFile, int zoomWidth = 0, int zoomHeight = 0);     // ï¿½ï¿½Í¼Æ¬ï¿½Ä¼ï¿½ï¿½ï¿½È¡Í¼ï¿½ï¿½(bmp/jpg/gif/emf/wmf)
int  EGEAPI getimage(PIMAGE pDstImg, LPCWSTR pImgFile, int zoomWidth = 0, int zoomHeight = 0);     // ï¿½ï¿½Í¼Æ¬ï¿½Ä¼ï¿½ï¿½ï¿½È¡Í¼ï¿½ï¿½(bmp/jpg/gif/emf/wmf)
int  EGEAPI getimage(PIMAGE pDstImg, LPCSTR  pResType, LPCSTR  pResName, int zoomWidth = 0, int zoomHeight = 0);   // ï¿½ï¿½ï¿½ï¿½Ô´ï¿½Ä¼ï¿½ï¿½ï¿½È¡Í¼ï¿½ï¿½(bmp/jpg/gif/emf/wmf)
int  EGEAPI getimage(PIMAGE pDstImg, LPCWSTR pResType, LPCWSTR pResName, int zoomWidth = 0, int zoomHeight = 0);   // ï¿½ï¿½ï¿½ï¿½Ô´ï¿½Ä¼ï¿½ï¿½ï¿½È¡Í¼ï¿½ï¿½(bmp/jpg/gif/emf/wmf)
void EGEAPI putimage(int dstX, int dstY, const PIMAGE pSrcImg, DWORD dwRop = SRCCOPY);                         // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ä»
void EGEAPI putimage(int dstX, int dstY, int dstWidth, int dstHeight, const PIMAGE pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY);    // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ä»(Ö¸ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
void EGEAPI putimage(int dstX, int dstY, int dstWidth, int dstHeight, const PIMAGE pSrcImg, int srcX, int srcY, int srcWidth, int srcHeight, DWORD dwRop = SRCCOPY);   // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ä»(Ö¸ï¿½ï¿½Ô´ï¿½ï¿½ßºï¿½Ä¿ï¿½ï¿½ï¿½ß½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
void EGEAPI putimage(PIMAGE pDstImg, int dstX, int dstY, const PIMAGE pSrcImg, DWORD dwRop = SRCCOPY);         // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ò»Í¼ï¿½ï¿½ï¿½ï¿½
void EGEAPI putimage(PIMAGE pDstImg, int dstX, int dstY, int dstWidth, int dstHeight, const PIMAGE pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY);    // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ò»Í¼ï¿½ï¿½ï¿½ï¿½(Ö¸ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
void EGEAPI putimage(PIMAGE pDstImg, int dstX, int dstY, int dstWidth, int dstHeight, const PIMAGE pSrcImg, int srcX, int srcY, int srcWidth, int srcHeight, DWORD dwRop = SRCCOPY);   // ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½Ò»Í¼ï¿½ï¿½ï¿½ï¿½(Ö¸ï¿½ï¿½Ô´ï¿½ï¿½ßºï¿½Ä¿ï¿½ï¿½ï¿½ß½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7)
int  EGEAPI saveimage(PIMAGE pimg, LPCSTR  filename);
int  EGEAPI saveimage(PIMAGE pimg, LPCWSTR filename);
int  EGEAPI savepng(PIMAGE pimg, LPCSTR  filename, int bAlpha = 0);
int  EGEAPI savepng(PIMAGE pimg, LPCWSTR filename, int bAlpha = 0);
int  EGEAPI getimage_pngfile(PIMAGE pimg, LPCSTR  filename);
int  EGEAPI getimage_pngfile(PIMAGE pimg, LPCWSTR filename);

int EGEAPI putimage_transparent(
	PIMAGE imgdest,         // handle to dest
	PIMAGE imgsrc,          // handle to source
	int nXOriginDest,       // x-coord of destination upper-left corner
	int nYOriginDest,       // y-coord of destination upper-left corner
	color_t crTransparent,  // color to make transparent
	int nXOriginSrc = 0,    // x-coord of source upper-left corner
	int nYOriginSrc = 0,    // y-coord of source upper-left corner
	int nWidthSrc = 0,      // width of source rectangle
	int nHeightSrc = 0      // height of source rectangle
);
int EGEAPI putimage_alphablend(
	PIMAGE imgdest,         // handle to dest
	PIMAGE imgsrc,          // handle to source
	int nXOriginDest,       // x-coord of destination upper-left corner
	int nYOriginDest,       // y-coord of destination upper-left corner
	unsigned char alpha,    // alpha
	int nXOriginSrc = 0,    // x-coord of source upper-left corner
	int nYOriginSrc = 0,    // y-coord of source upper-left corner
	int nWidthSrc = 0,      // width of source rectangle
	int nHeightSrc = 0      // height of source rectangle
);
int EGEAPI putimage_alphatransparent(
	PIMAGE imgdest,         // handle to dest
	PIMAGE imgsrc,          // handle to source
	int nXOriginDest,       // x-coord of destination upper-left corner
	int nYOriginDest,       // y-coord of destination upper-left corner
	color_t crTransparent,  // color to make transparent
	unsigned char alpha,    // alpha
	int nXOriginSrc = 0,    // x-coord of source upper-left corner
	int nYOriginSrc = 0,    // y-coord of source upper-left corner
	int nWidthSrc = 0,      // width of source rectangle
	int nHeightSrc = 0      // height of source rectangle
);
int EGEAPI putimage_withalpha(
	PIMAGE imgdest,         // handle to dest
	PIMAGE imgsrc,          // handle to source
	int nXOriginDest,       // x-coord of destination upper-left corner
	int nYOriginDest,       // y-coord of destination upper-left corner
	int nXOriginSrc = 0,    // x-coord of source upper-left corner
	int nYOriginSrc = 0,    // y-coord of source upper-left corner
	int nWidthSrc = 0,      // width of source rectangle
	int nHeightSrc = 0      // height of source rectangle
);
int EGEAPI imagefilter_blurring (
	PIMAGE imgdest,         // handle to dest
	int intensity,
	int alpha,
	int nXOriginDest = 0,
	int nYOriginDest = 0,
	int nWidthDest = 0,
	int nHeightDest = 0
);
int EGEAPI putimage_rotate(
	PIMAGE imgdest,
	PIMAGE imgtexture,
	int nXOriginDest,
	int nYOriginDest,
	float centerx,
	float centery,
	float radian,
	int btransparent = 0,           // transparent (1) or not (0)
	int alpha = -1,                  // in range[0, 256], alpha== -1 means no alpha
	int smooth = 0
);

int EGEAPI putimage_rotatezoom(
	PIMAGE imgdest,
	PIMAGE imgtexture,
	int nXOriginDest,
	int nYOriginDest,
	float centerx,
	float centery,
	float radian,
	float zoom,
	int btransparent = 0,           // transparent (1) or not (0)
	int alpha = -1,                  // in range[0, 256], alpha== -1 means no alpha
	int smooth = 0
);

class PushTarget {
public:
	PushTarget() { m_target = gettarget(); }
	PushTarget(PIMAGE target) { m_target = gettarget(); settarget(target); }
	~PushTarget() { settarget(m_target); }
private:
	PIMAGE m_target;
};

#define CTL_PREINIT(classname, parent) \
	struct preinit_obj { \
		preinit_obj(classname* This, int inheritlevel) { \
			This->pre_init(inheritlevel); \
		} \
	}_preinit_obj; \
	enum inherit_e { inherit_level_e = parent::inherit_level_e + 1, }; \
	static void firstinit(ege::egeControlBase* This) { \
		((classname*)This)->m_inheritlevel = 1; \
	} \
	void pre_init(int inheritlevel) {\
		(void)inheritlevel;

#define CTL_PREINITEND  }
#define CTL_DEFPARAM    int inherit = inherit_level_e, ege::egeControlBase* pParent = NULL
#define CTL_INITBASE(parent)    _preinit_obj(this, inherit_level_e), parent(inherit, (ege::egeControlBase*)pParent)
#define CTL_INIT        InitObject iobj(this, inherit_level_e);\
						ege::PushTarget _pushtarget(buf());

#define EGECTRL_INITEND()     }

class egeControlBase
{
public:
	enum ROP {
		COPY    = SRCCOPY,
		XOR     = SRCINVERT,
		AND     = SRCAND,
		OR      = SRCPAINT,
	};
	enum blendmode_e {
		SOLIDCOPY = 0,
		ALPHABLEND = 1,
	};
	enum inherit_e {
		inherit_level_e = 0,
	};
	// ï¿½ï¿½ï¿½ìº¯ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô¶ï¿½ï¿½å£¬ï¿½ï¿½Òªï¿½ï¿½ï¿½ï¿½ÒªÑ¡ï¿½ï¿½Ê¹ï¿½ï¿½Ê¹ï¿½Ãºê£¬ï¿½ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Äµï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
	egeControlBase();
	egeControlBase(int inherit, egeControlBase* pParent);
	~egeControlBase();

	// ï¿½ï¿½ï¿½ï¿½ï¿½éº¯ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ÒªÖ±ï¿½ï¿½ï¿½à»¥ï¿½ï¿½ï¿½ï¿½
	virtual LRESULT onMessage(UINT message, WPARAM wParam, LPARAM lParam) { (void)message; (void)wParam; (void)lParam; return 0; }
	// ï¿½ï¿½ï¿½Âºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ø·ï¿�?¤70ï¿½ï¿½ï¿½ï¿½ï¿½Ó¿Ø¼ï¿½ï¿½ï¿½ï¿½Ý¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï�?¤7
	virtual int  onMouse(int x, int y, int flag) { (void)x; (void)y; (void)flag; return 0; }
	virtual int  onKeyDown(int key, int flag) { (void)key; (void)flag; return 0; }
	virtual int  onKeyUp(int key, int flag) { (void)key; (void)flag; return 0; }
	virtual int  onKeyChar(int key, int flag) { (void)key; (void)flag; return 0; }
	// ï¿½ï¿½Ä»ï¿½ï¿½ï¿½Âºï¿½á±»ï¿½ï¿½ï¿½Ã£ï¿½ï¿½ï¿½ï¿½Ú¸ï¿½ï¿½ï¿½ï¿½ß¼ï¿�?¤7
	virtual int  onUpdate() { return 0; }
	// ï¿½ï¿½ï¿½ï¿½GetFocusï¿½ï¿½Òªï¿½ï¿½Ã½ï¿½ï¿½ï¿½Ê±ï¿½ï¿½ï¿½Ã£ï¿½ï¿½ï¿½ï¿½ï¿½ÖµÒ»ï¿½ã·µï¿½ï¿�?¤70ï¿½ï¿½Ê¾ï¿½ï¿½È¡ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ë½¹ï¿½ã£¬ï¿½ï¿½ï¿½Ø·ï¿½0ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ë½¹ï¿½ï¿�?¤7
	virtual int  onGetFocus() { return 0; }
	// Ê§È¥ï¿½ï¿½ï¿½ë½¹ï¿½ï¿½Ê±ï¿½ï¿½ï¿½ï¿½
	virtual void onLostFocus() { }
	// ï¿½ï¿½ï¿½Ã³ß´ï¿½Ç°ï¿½ï¿½ï¿½Ã£ï¿½ï¿½Ô¶ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	virtual void onSizing(int *w, int *h) { (void)w; (void)h; }
	// ï¿½ï¿½Ó¦ï¿½ß´ï¿½ä»¯ï¿½ï¿½ï¿½ï¿�?¤7
	virtual void onSize(int w, int h) { (void)w; (void)h; }
	// ï¿½Ø»æº¯ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ë»­ï¿½ï¿½pimgï¿½Ï£ï¿½ï¿½Ô±ï¿½ï¿½Ü¿ï¿½ï¿½Æ»æ»­Ä¿ï¿½ï¿½
	virtual void onDraw(PIMAGE pimg) const { (void)pimg; }
	// ï¿½ß´ï¿½ä»¯Ê±ï¿½ï¿½ï¿½Ã£ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ø»ï¿½ï¿½ï¿½ï¿½Ë»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
	virtual void onResetFilter() {
		setbkcolor(BLACK, m_mainFilter);
		cleardevice(m_mainFilter);
	}
	virtual void onAddChild(egeControlBase* pChild) { (void)pChild; }
	virtual void onDelChild(egeControlBase* pChild) { (void)pChild; }
	virtual void onIdle() {} // ï¿½ï¿½ï¿½ï¿½Ó¿Ú£ï¿½Î´ï¿½ï¿�?¤7
	// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ÏµÄºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð¶ï¿½ï¿½å£¨×¢ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ÒªÒ»ï¿½Â£ï¿½ï¿½ï¿½ÒªÂ©ï¿½ï¿½OnDrawï¿½ï¿½ï¿½constï¿½ï¿½
	// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Âµï¿½publicï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ôµï¿½ï¿½Ã£ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô¶ï¿½ï¿½å£¬ï¿½Îºï¿½Ô¤ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ÒªÖ±ï¿½Ó·ï¿½ï¿½Ê£ï¿½ï¿½ï¿½Ê¹ï¿½ï¿½Ô¤ï¿½ï¿½ï¿½åº¯ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
public:
	PIMAGE buf() { return m_mainbuf; }
	PIMAGE filter() { return m_mainFilter; }
	egeControlBase* parent() { return m_parent; }
	PIMAGE buf() const { return m_mainbuf; }
	PIMAGE filter() const { return m_mainFilter; }
	const egeControlBase* parent() const { return m_parent; }

	void blendmode(int mode) { m_AlphablendMode = mode; }
	void setrop(int rop) { m_rop = rop; } // ï¿½ï¿½ï¿½ï¿½Ã¶ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ROPï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7

	void directdraw(bool bdraw) { m_bDirectDraw = (bdraw ? 1 : 0); }
	bool isdirectdraw() const { return (m_bDirectDraw != 0); }
	void autoredraw(bool bautoredraw)  { m_bAutoDraw = (bautoredraw ? 1 : 0); }
	bool isautoredraw() const       { return (m_bAutoDraw != 0); }
	void visable(bool bvisable)     { m_bVisable = (bvisable ? 1 : 0); }
	bool isvisable() const          { return (m_bVisable != 0); }
	void enable(bool benable)       { m_bEnable = (benable ? 1 : 0); }
	bool isenable() const           { return (m_bEnable != 0); }
	void capture(bool bcapture)     { m_bCapture = (bcapture ? 1 : 0); }
	bool iscapture() const          { return (m_bCapture != 0); }
	void capmouse(bool bcapmouse)   { m_bCapMouse = (bcapmouse ? 1 : 0); }
	bool iscapmouse() const         { return (m_bCapMouse != 0); }
	bool isfocus() const            { return (m_bInputFocus != 0); }
	void move(int x, int y)         { m_x = x; m_y = y; }
	void size(int w, int h) {
		onSizing(&w, &h);
		m_w = w; m_h = h;
		resize(m_mainbuf, w, h);
		resize(m_mainFilter, w, h);
		onSize(w, h);
		onResetFilter();
	}
	void zorderup();
	void zorderdown();
	void zorderset(int z);

	int getx()      const { return m_x; }
	int gety()      const { return m_y; }
	int getw()      const { return m_w; }
	int geth()      const { return m_h; }
	int width()     const { return m_w; }
	int height()    const { return m_h; }

	int  addchild(egeControlBase* pChild);
	int  delchild(egeControlBase* pChild);
	void draw(PIMAGE pimg);
	void update();
	void mouse(int x, int y, int flag);
	void keymsgdown(unsigned key, int flag);
	void keymsgup(unsigned key, int flag);
	void keymsgchar(unsigned key, int flag);
	bool operator < (const egeControlBase& pbase) const {
		if (m_zOrderLayer != pbase.m_zOrderLayer)
			return m_zOrderLayer < pbase.m_zOrderLayer;
		if (m_zOrder == pbase.m_zOrder)
			return this < &pbase;
		else
			return m_zOrder < pbase.m_zOrder;
	}
protected:
	int allocId();
	int allocZorder();
	class InitObject {
	public:
		InitObject(egeControlBase* pThis, int inherit_level);
		~InitObject();
	private:
		egeControlBase* m_this;
		int m_inherit_level;
	};
	void (* m_preinit_func )(egeControlBase*);
private:
	void init(egeControlBase* parent);
	void fixzorder();
	void sortzorder();
#if _MSC_VER <= 1200
public:
#endif
	void initok();
private:
	PIMAGE   m_mainbuf;      // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	PIMAGE   m_mainFilter;   // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

private:
	int m_bVisable;     // ï¿½Ç·ï¿½É¼ï¿�?¤7
	int m_bEnable;      // ï¿½Ç·ï¿½É»ï¿½ï¿½ï¿½ï¿½ï¿½ë£¨ï¿½ï¿½ï¿½Ìºï¿½ï¿½ï¿½ê£�?¤7
	int m_bAutoDraw;    // ï¿½Ç·ï¿½ï¿½Ô¶ï¿½ï¿½æ»­ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	int m_bCapture;     // ï¿½Ç·ï¿½É»ï¿½Ã¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ë½¹ï¿½ï¿½
	int m_bInputFocus;  // ï¿½Ç·ï¿½ï¿½Ñ¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ë½¹ï¿½ï¿�?¤7
	int m_bCapMouse;    // ï¿½Ç·ï¿½×½ï¿½ï¿½ê£¨ï¿½ï¿½Ê¹ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ú£ï¿�?¤7
	int m_zOrderLayer;  // Zï¿½ï¿½ï¿½ï¿½ã£¨Öµï¿½Ï´ï¿½ï¿½ï¿½ï¿½ï¿½Ç°ï¿½ï¿½Öµï¿½ï¿½Ð¡ï¿½ß»á±»ï¿½ï¿½ï¿½ï¿½ï¿½Ø¼ï¿½ï¿½Úµï¿½ï¿½ï¿�?¤7
	int m_zOrder;       // Zï¿½ï¿½ï¿½ï¿½Öµï¿½Ï´ï¿½ï¿½ï¿½ï¿½ï¿½Ç°ï¿½ï¿½Öµï¿½ï¿½Ð¡ï¿½ß»á±»ï¿½ï¿½ï¿½ï¿½ï¿½Ø¼ï¿½ï¿½Úµï¿½ï¿½ï¿½
	int m_allocId;      // ï¿½ï¿½ï¿½ï¿½id
	int m_allocZorder;  // ï¿½ï¿½ï¿½ï¿½Zï¿½ï¿½ï¿½ï¿½

	egeControlBase* m_parent;
	static int s_maxchildid;   // ï¿½ï¿½Ò»ï¿½ï¿½ï¿½Ó¿Ø¼ï¿½ï¿½ï¿½ï¿½ï¿½IDÖµ

#ifdef _GRAPH_LIB_BUILD_
public:
#else
private:
#endif
	void* m_childmap;       // ï¿½Ó¿Ø¼ï¿½
	void* m_childzorder;    // ï¿½Ó¿Ø¼ï¿½ï¿½ï¿½ï¿½ï¿½

protected:
	int m_x, m_y;       // ï¿½ï¿½ï¿½Ï½ï¿½ï¿½ï¿½ï¿½ï¿½
	int m_w, m_h;       // ï¿½ï¿½ï¿�?¤7

protected:
	DWORD   m_rop;              // ï¿½ï¿½Ï·ï¿½Ê�?¤7
	int     m_AlphablendMode;   // ï¿½æ»­ï¿½ï¿½Ï¹ï¿½ï¿½Ë·ï¿½Ê�?¤7
	int     m_bDirectDraw;      // ï¿½ï¿½ï¿½ï¿½Ö±ï¿½Ó»æ»­
#if _MSC_VER <= 1200
public:
#endif
	int     m_inheritlevel;     // ï¿½Ì³Ð²ï¿½ï¿�?¤7
};

// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

HWND        EGEAPI getHWnd();         // ï¿½ï¿½È¡ï¿½ï¿½Í¼ï¿½ï¿½ï¿½Ú¾ï¿½ï¿�?¤7
HINSTANCE   EGEAPI getHInstance();
PVOID       EGEAPI getProcfunc();
int         EGEAPI getGraphicsVer();   // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½æ±¾ ###
float       EGEAPI getfps(); // ï¿½ï¿½È¡ï¿½ï¿½Ç°Ö¡ï¿½ï¿½

//ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7
void            EGEAPI randomize();
unsigned int    EGEAPI random(unsigned int n);
double          EGEAPI randomf();

//ï¿½ß¼ï¿½ï¿½ï¿½ï¿½ëº¯ï¿½ï¿½
// title ï¿½Ô»ï¿½ï¿½ï¿½ï¿½ï¿½â£�?¤7 text ï¿½Ô»ï¿½ï¿½ï¿½ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½Ö£ï¿½ bufï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ýµï¿½ï¿½Ö·ï¿½ï¿½ï¿½Ö¸ï¿½ë£¬ lenÖ¸ï¿½ï¿½bufï¿½ï¿½ï¿½ï¿½ó³¤¶È£ï¿½Ò²Í¬Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ý³ï¿½ï¿½ï¿�?¤7
int EGEAPI inputbox_getline(LPCSTR  title, LPCSTR  text, LPSTR  buf, int len);  //ï¿½ï¿½ï¿½ï¿½ï¿½Ô»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ã»ï¿½ï¿½ï¿½ï¿½ë£¬ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í£ï¿½ï¿½ï¿½ï¿½ï¿½Ø·ï¿½0ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð§ï¿½ï¿½0Îªï¿½ï¿½Ð§
int EGEAPI inputbox_getline(LPCWSTR title, LPCWSTR text, LPWSTR buf, int len);  //ï¿½ï¿½ï¿½ï¿½ï¿½Ô»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ã»ï¿½ï¿½ï¿½ï¿½ë£¬ï¿½ï¿½Ç°ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í£ï¿½ï¿½ï¿½ï¿½ï¿½Ø·ï¿½0ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð§ï¿½ï¿½0Îªï¿½ï¿½Ð§


//ï¿½ï¿½ï¿½Ì´ï¿½ï¿½ï¿½ï¿½ï¿½
int     EGEAPI kbmsg();
key_msg EGEAPI getkey();
EGE_DEPRECATE(getchEx)
int     EGEAPI getchEx(int flag);
EGE_DEPRECATE(kbhitEx)
int     EGEAPI kbhitEx(int flag);
int     EGEAPI keystate(int key);       // ï¿½ï¿½Ã¼ï¿½ï¿½ï¿½Îªkeyï¿½Ä¼ï¿½ï¿½ï¿½ï¿½ï¿½key_code_eï¿½ï¿½ï¿½Ç·ï¿½ï¿½Â£ï¿½ï¿½ï¿½ï¿½keyÊ¹ï¿½ï¿½ï¿½ï¿½ê°´ï¿½ï¿½ï¿½Ä¼ï¿½ï¿½ë£¬ï¿½ï¿½ï¿½Ãµï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×´Ì�?¤7
void    EGEAPI flushkey();              // ï¿½ï¿½Õ¼ï¿½ï¿½ï¿½ï¿½ï¿½Ï¢ï¿½ï¿½ï¿½ï¿½ï¿½ï¿�?¤7

//#ifndef _GRAPH_LIB_BUILD_
#if !defined(_INC_CONIO) && !defined(_CONIO_H_)
#define _INC_CONIO
#define _CONIO_H_
int EGEAPI getch();
int EGEAPI kbhit();
#else
#define getch getchEx
#define kbhit kbhitEx
#endif
//#endif

//ï¿½ï¿½ê´¦ï¿½ï¿½ï¿½ï¿�?¤7
int         EGEAPI mousemsg();                  // ï¿½ï¿½ï¿½ï¿½Ç·ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï�?¤7
mouse_msg   EGEAPI getmouse();                  // ï¿½ï¿½È¡Ò»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï¢ï¿½ï¿½ï¿½ï¿½ï¿½Ã»ï¿½Ð£ï¿½ï¿½ÍµÈ´ï¿½
EGE_DEPRECATE(GetMouseMsg)
MOUSEMSG    EGEAPI GetMouseMsg();               // ï¿½ï¿½ï¿½ï¿½ï¿½Æ¼ï¿½Ê¹ï¿½ÃµÄºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½È¡Ò»ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï¢ï¿½ï¿½ï¿½ï¿½ï¿½Ã»ï¿½Ð£ï¿½ï¿½ÍµÈ´ï¿½

void        EGEAPI flushmouse();                // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ï¢ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
int         EGEAPI showmouse(int bShow);        // ï¿½ï¿½ï¿½ï¿½ï¿½Ç·ï¿½ï¿½ï¿½Ê¾ï¿½ï¿½ï¿�?¤7
int         EGEAPI mousepos(int *x, int *y); // ï¿½ï¿½È¡ï¿½ï¿½Ç°ï¿½ï¿½ï¿½Î»ï¿½ï¿�?¤7

/*
callback function define as:
int __stdcall on_msg_key(void* param, unsigned msg, int key);
msg: see 'enum message_event'
key: keycode
return zero means process this message, otherwise means pass it and then process with 'getkey' function
*/
//int message_addkeyhandler(void* param, LPMSG_KEY_PROC func);        //ï¿½ï¿½ï¿½Ã¼ï¿½ï¿½Ì»Øµï¿½ï¿½ï¿½ï¿½ï¿½
/*
callback function define as:
int __stdcall on_msg_mouse(void* param, unsigned msg, int key, int x, int y);
msg: see 'enum message_event'
key: see 'enum message_mouse', if msg==MSG_EVENT_WHELL, key is a int number that indicates the distance the wheel is rotated, expressed in multiples or divisions of WHEEL_DELTA, which is 120.
x,y: current mouse (x, y)
return zero means process this message, otherwise means pass it and then process with 'GetMouseMsg' function
*/
//int message_addmousehandler(void* param, LPMSG_MOUSE_PROC func);    //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Øµï¿½ï¿½ï¿½ï¿½ï¿½
int EGEAPI SetCloseHandler(LPCALLBACK_PROC func);


class MUSIC
{
public:
	MUSIC();
	virtual ~MUSIC();
	operator HWND()const{ return (HWND)m_dwCallBack; }
public:
	int   IsOpen() { return (m_DID != MUSIC_ERROR) ? 1 : 0; }
	DWORD OpenFile(LPCSTR  filepath);
	DWORD OpenFile(LPCWSTR filepath);
	DWORD Play(DWORD dwFrom = MUSIC_ERROR, DWORD dwTo = MUSIC_ERROR);
	DWORD Pause();
	DWORD Seek(DWORD dwTo); //ï¿½ï¿½ï¿½ï¿½Î»ï¿½Ã¶ï¿½Î»ï¿½ï¿½ï¿½ï¿½Î»Îªms
	DWORD SetVolume(float value);
	DWORD Close();
	DWORD Stop();
	DWORD GetPosition();
	DWORD GetLength();
	// ï¿½ï¿½ï¿½Âºï¿½ï¿½ï¿½GetPlayStatusï¿½Ä·ï¿½ï¿½ï¿½ÖµÎªï¿½ï¿½ï¿½ï¿½Ö®Ò»ï¿½ï¿½ï¿½ï¿½ï¿½å¿´ï¿½ï¿½×ºï¿½ï¿½ï¿½ï¿½
	// MUSIC_MODE_NOT_OPEN   //Ã»ï¿½ï¿½ï¿½ï¿½È·ï¿½ï¿½
	// MUSIC_MODE_NOT_READY  //ï¿½è±¸Ã»×¼ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¹ï¿½Ã£ï¿½
	// MUSIC_MODE_PAUSE  //ï¿½ï¿½Í£ï¿½ï¿½
	// MUSIC_MODE_PLAY   //ï¿½ï¿½ï¿½Ú²ï¿½ï¿½ï¿½
	// MUSIC_MODE_STOP   //ï¿½É¹ï¿½ï¿½ò¿ªºó£¬»ï¿½ï¿½ß²ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×´Ì�?¤7
	// MUSIC_MODE_OPEN   //ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¹ï¿½Ã£ï¿½
	// MUSIC_MODE_SEEK   //ï¿½ï¿½Î»ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¹ï¿½Ã£ï¿½
	DWORD GetPlayStatus();
private:
	DWORD       m_DID;
	PVOID       m_dwCallBack;
};

/* Ñ¹ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ */
/* Ñ¹ï¿½ï¿½Ê±destï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Òªï¿½ï¿½Ö¤ï¿½ï¿½Ð¡ï¿½ï¿½Ð¡ÎªsourceLen * 1.001 + 16 */
/* ï¿½ï¿½ï¿½ï¿½compress/compress2Ç°ï¿½ï¿½*destLenï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Öµï¿½ï¿½ï¿½ï¿½Ê¾destï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ð¡ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê±ï¿½ï¿½ï¿½Öµï¿½ï¿½Ê¾Êµï¿½Ê´ï¿½Ð�?¤7 */
/* compress2 ï¿½ï¿½level ï¿½ï¿½0-9ï¿½ï¿½0ï¿½ï¿½Ñ¹ï¿½ï¿½ï¿½ï¿½9ï¿½ï¿½ï¿½Ñ¹ï¿½ï¿½ï¿½ï¿½compressï¿½ï¿½ï¿½ï¿½Ê¹ï¿½ï¿½Ä¬ï¿½ï¿½Öµ6 */
int             EGEAPI ege_compress(void *dest, unsigned long *destLen, const void *source, unsigned long sourceLen);
int             EGEAPI ege_compress2(void *dest, unsigned long *destLen, const void *source, unsigned long sourceLen, int level);
int             EGEAPI ege_uncompress(void *dest, unsigned long *destLen, const void *source, unsigned long sourceLen);
unsigned long   EGEAPI ege_uncompress_size(const void *source, unsigned long sourceLen); /* ï¿½ï¿½ï¿½ï¿½0ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê¾ï¿½ï¿½Ð¡ */

NAMESPACE_EGE_R

#ifndef _GRAPH_LIB_BUILD_

#if defined(_MSC_VER) && (defined(HIDE_CONSOLE) || !defined(SHOW_CONSOLE))
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#endif

#define Sleep(ms) delay_ms(ms)

#endif

#if !defined(_MSC_VER)
#define WinMain(...) WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#elif defined(_CONSOLE)
#if (_MSC_VER > 1200)
#define WinMain(...) main(int argc, char* argv[])
#else
#define WinMain main
#endif
#endif

#endif
