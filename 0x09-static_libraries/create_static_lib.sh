#!/bin/bash
gcc -wall -Pendantic -Werror -Wextra -c *.c
ar -rc liball.a *.a
ranlib liball.a
