// File: c/args/add.c

// Created by hengxin on 17-11-23.

/**
 * Illustration for command-line arguments.
 * WARNING: This is only for demonstration.
 *
 * For programming tutorial 1-5 on command-line arguments.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("The program is: %s.\n", argv[0]);

    if (argc != 3) {
        printf("Usage: add a b");
    } else {
        int fst = atoi(argv[1]);
        int snd = atoi(argv[2]);
        printf("%d + %d = %d", fst, snd, fst + snd);
    }

    return 0;
}
