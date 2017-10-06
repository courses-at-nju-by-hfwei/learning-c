// File: memory_leak.c
// Created by hengxin on 17-10-6.
// Illustration of Cppcheck
// See http://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Debugging.html#Valgrind

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    // (1) missing free
    char *s;

    s = malloc(26);
//    free(s);

    return 0;
}

