#!/bin/bash

#************************** create_static_lib.sh ******************************#
# A script that creates a static library called liball.a from all the .c files #
# that are in the current directory.                                           #

gcc -c *.c && ar -rc liball.a *.o && ranlib liball.a ||
	echo -e "\n An error occured. Library creation failed.\n"

mkdir ./sourcefiles.dir && mv *.c sourcefiles.dir ||
	echo -e "\n An error occured. sourcefile move failed.\n"
