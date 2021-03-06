#ifndef _STDINC_H
#define _STDINC_H
/* stdinc.h */
/*****************************************************************************/
/* AS-Portierung                                                             */
/*                                                                           */
/* globaler Einzug immer benoetigter includes                                */
/*                                                                           */
/* Historie: 21. 5.1996 min/max                                              */
/*           11. 5.1997 DOS-Anpassungen                                      */
/*                                                                           */
/*****************************************************************************/
/* $Id: stdinc.h,v 1.1 2003/11/06 02:49:24 alfred Exp $                     */
/***************************************************************************** 
 * $Log: stdinc.h,v $
 * Revision 1.1  2003/11/06 02:49:24  alfred
 * - recreated
 *
 * Revision 1.2  2003/05/03 10:28:30  alfred
 * - no malloc.h for OSX
 *
 *****************************************************************************/

#include <stdio.h>
#ifndef __MUNIX__
#include <stdlib.h>
#endif
#if !defined ( __MSDOS__ ) && !defined( __IBMC__ )
#include <unistd.h>
#endif
#include <math.h>
#include <errno.h>
#include <sys/types.h>
#ifdef __MSDOS__
#include <alloc.h>
#else
#include <memory.h>
#if !defined (__FreeBSD__) && !defined(__APPLE__)
#include <malloc.h>
#endif
#endif

#include "pascstyle.h"
#include "datatypes.h"
#include "chardefs.h"

#ifndef min
#define min(a,b) ((a<b)?(a):(b))
#endif
#ifndef max
#define max(a,b) ((a>b)?(a):(b))
#endif

#ifndef M_PI
#define M_PI 3.1415926535897932385E0
#endif

#endif /* _STDINC_H */
