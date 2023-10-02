#!/bin/bash
gcc -rc *.c
ar -rc liball.a *.o
ranlib liball.a
