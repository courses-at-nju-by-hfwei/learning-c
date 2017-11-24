// File: c/args/find-pattern.c

// Created by hengxin on 17-11-23.

/**
 * Illustration of command-line arguments.
 *
 * For programming tutorial 1-5 on C library.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int match = 0;

    if (argc != 3) {
        puts("Usage: find-pattern text pattern");
    } else {
        char *text = argv[1];
        char *pattern = argv[2];
        char *pch = NULL;
        while ((pch = strstr(text, pattern)) != NULL) {
            match++;
            text = ++pch;
        }
    }

    printf("Find %d patterns.", match);
}
