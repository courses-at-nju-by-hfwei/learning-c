// File: invalid_memory_access.c
// Created by hengxin on 17-10-6.
// Illustration of Cppcheck

#include <stdio.h>
#include <stdlib.h>

int read_after_free();

int main(int argc, char **argv) {
    int x = read_after_free();
    printf("x is now: %d.\n", x);
}

int read_after_free() {
    int *p = (int *) malloc(sizeof(int));
    *p = 25;
    free(p);

    int x = *p;
    return x;

    // This cannot be detected by Cppcheck.
//    return *p;
}

