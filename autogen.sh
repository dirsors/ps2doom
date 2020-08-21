#!/bin/sh

mkdir -p autotools

aclocal
autoheader
automake -a -c
autoconf
automake
