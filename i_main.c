// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//	Main program, simply calls D_DoomMain high level loop.
//
//-----------------------------------------------------------------------------

static const char
rcsid[] = "$Id: i_main.c,v 1.4 1997/02/03 22:45:10 b1 Exp $";


#include "SDL.h"

#include "doomdef.h"

#include "m_argv.h"
#include "d_main.h"

#include <ps2_all_drivers.h>
#include <debug.h>

static void init_drivers(void) {
//    init_fileXio_driver();
    init_memcard_driver(true);
//    init_usb_driver(true);
//    init_cdfs_driver();
//    init_joystick_driver(true);
//    init_audio_driver();
//    init_poweroff_driver();
//    init_hdd_driver(true, true);
}

static void deinit_drivers(void) {
//    deinit_poweroff_driver();
//    deinit_audio_driver();
//    deinit_joystick_driver(false);
//    deinit_usb_driver(false);
//    deinit_cdfs_driver();
    deinit_memcard_driver(true);
//    deinit_hdd_driver(false);
//    deinit_fileXio_driver();
}


int
main
( int		argc,
  char**	argv ) 
{ 
    myargc = argc; 
    myargv = argv; 
 
    init_drivers();
    init_scr();

    D_DoomMain (); 

    return 0;
} 
