#!/bin/sh
gcc -Wall -Werror -Wextra -c ./src/*.c
ar rcs libft.a ./*.o
ranlib libft.a
rm ./*.o
