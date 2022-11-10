#!/bin/bash

gcc -c *.c

at -rc liball.a *.o

ranlib liball.a
