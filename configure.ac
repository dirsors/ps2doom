AC_INIT(SDLDOOM, 1.10, Sam Lantinga, sdldoom)
AC_CONFIG_AUX_DIR(autotools)

AM_INIT_AUTOMAKE(sdldoom, 1.10)

AC_PROG_MAKE_SET
AC_PROG_CC
AC_PROG_INSTALL

dnl Check for SDL
SDL_VERSION=1.0.1
AM_PATH_SDL($SDL_VERSION,
            :,
            AC_MSG_ERROR([*** SDL version $SDL_VERSION not found!])
)
CFLAGS="$CFLAGS $SDL_CFLAGS"
LIBS="$LIBS $SDL_LIBS"

AM_CONFIG_HEADER(config.h:config.hin)

AC_SUBST(ac_aux_dir)

AC_OUTPUT([
Makefile
src/Makefile
])
