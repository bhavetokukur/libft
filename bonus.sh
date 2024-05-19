#!/bin/bash

rm -f a.out
make clean
make bonus
echo "---------------------$1------------------------"
cc -Wall -Wextra -Werror -o a.out ./mytest/ft_$1_test.c -L. -lft
echo "---------------------Om------------------------"
./a.out