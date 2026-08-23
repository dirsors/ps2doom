
EE_OBJS =  am_map.o d_items.o d_main.o d_net.o doomdef.o doomstat.o \
dstrings.o f_finale.o f_wipe.o g_game.o hu_lib.o hu_stuff.o i_main.o \
i_net.o l_sound_sdl.o mmus2mid.o i_system.o i_video.o info.o m_argv.o m_bbox.o \
m_cheat.o m_fixed.o m_menu.o m_misc.o m_random.o m_swap.o p_ceilng.o \
p_doors.o p_enemy.o p_floor.o p_inter.o p_lights.o p_map.o p_maputl.o \
p_mobj.o p_plats.o p_pspr.o p_saveg.o p_setup.o p_sight.o p_spec.o \
p_switch.o p_telept.o p_tick.o p_user.o r_bsp.o r_data.o r_draw.o \
r_main.o r_plane.o r_segs.o r_sky.o r_things.o s_sound.o sounds.o \
st_lib.o st_stuff.o tables.o v_video.o w_wad.o wi_stuff.o z_zone.o \
ps2doom.o mixer_thread.o mixer.o cosmitoFileIO.o sjpcm_rpc.o usbd.o \
usbhdfsd.o SJPCM.o freesd.o iomanX.o fileXio.o ps2dev9.o ps2atad.o \
ps2fs.o ps2hdd.o poweroff.o

EE_BIN = ps2doom.elf

EE_INCS = \
    -I$(PS2SDK)/ports/include/SDL \
    -I$(PS2SDK)/ports/include \
    -I$(PS2DEV)/gsKit/include

EE_LDFLAGS = \
    -L$(PS2SDK)/ports/lib \
    -L$(PS2DEV)/gsKit/lib

EE_LIBS = \
    -lsdlmain \
    -lsdlmixer \
    -lsdl \
    -lgskit \
    -lcdvd \
    -ldmakit \
    -lps2ip \
    -ldebug \
    -lconfig \
    -lmc \
    -lc \
    -lhdd \
    -lfileXio \
    -lpoweroff

EE_CFLAGS = -DUSE_RWOPS -DHAVE_CONFIG_H -DHAVE_MIXER -std=gnu17 -D_EE

all: $(EE_BIN)

clean:
	rm -f $(EE_OBJS) $(EE_BIN)

run:
	ps2client execee host:$(EE_BIN)

reset:
	ps2client reset

usbd.c : usbd.irx
	bin2c usbd.irx usbd.c usbd

usbhdfsd.c : usbhdfsd.irx
	bin2c usbhdfsd.irx usbhdfsd.c usbhdfsd

SJPCM.c : SJPCM.IRX
	bin2c SJPCM.IRX SJPCM.c SJPCM

freesd.c : freesd-1.01.irx
	bin2c freesd-1.01.irx freesd.c freesd

iomanX.c : iomanX.irx
	bin2c iomanX.irx iomanX.c iomanX

fileXio.c : fileXio.irx
	bin2c fileXio.irx fileXio.c fileXio

ps2dev9.c : ps2dev9.irx
	bin2c ps2dev9.irx ps2dev9.c ps2dev9

ps2atad.c : ps2atad.irx
	bin2c ps2atad.irx ps2atad.c ps2atad

ps2hdd.c : ps2hdd.irx
	bin2c ps2hdd.irx ps2hdd.c ps2hdd

ps2fs.c : ps2fs.irx
	bin2c ps2fs.irx ps2fs.c ps2fs

poweroff.c : poweroff.irx
	bin2c poweroff.irx poweroff.c poweroff


include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal

