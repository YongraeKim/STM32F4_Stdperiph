/*-------------------------------------------*/
/* Integer type definitions for FatFs module */
/*-------------------------------------------*/

#ifndef _INTEGER

#if 0
#include <windows.h>
#else
#ifndef STM32F40_41xxx
#include "stm32f10x.h"
#else
#include "stm32f4xx.h"
#endif

/* These types must be 16-bit, 32-bit or larger integer */
typedef int				INT;
typedef unsigned int	UINT;

/* These types must be 8-bit integer */
typedef signed char		CHAR;
typedef unsigned char	UCHAR;
typedef unsigned char	BYTE;

/* These types must be 16-bit integer */
typedef short			SHORT;
typedef unsigned short	USHORT;
typedef unsigned short	WORD;
typedef unsigned short	WCHAR;

/* These types must be 32-bit integer */
typedef long			LONG;
typedef unsigned long	ULONG;
typedef unsigned long	DWORD;

/* Boolean type */
// typedef enum { FALSE = 0, TRUE } BOOL;

#ifndef BASETSD

#include <stdbool.h>

//typedef bool BOOL;
#ifndef FALSE
#define FALSE false
#define TRUE true
#endif

#endif

#endif

#define _INTEGER
#endif
