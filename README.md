Hi.
This fork have some minor bugfixes for PS2 Doom.
Fixes implemented so far:
- Switches flipped that doesn't animate;
- ouch face bug;
- IDCLEV cheat bug;
- some minor errors on code, like lack of variable types declaration.

  Please, have a look at the binary and try it out. Check the "duarte" branch. Thankyou!
  
PS2 Doom
========

Quick PlayStation 2 port - More information available at my [website](http://lukasz.dk/2008/02/11/doom-playstation-2-port/)

Requires PS2SDK, gsKit and SDL for PS2 to compile.

Build with: make -f Makefile.ps2

Some very hackish stuff in w_wad.c / W_ReadLump function, to speed up loading,
which will probably break loading from multiple files.

	Controls:

	Left Analog Stick : Move
	Cross             : Enter 
	Square/R1         : CTRL / Fire
	Circle/R2         : Space / Open doors
	Triangle          : Escape
	L1                : x
	L2                : y 

	L1 and L2 are for entering savegame names.  

