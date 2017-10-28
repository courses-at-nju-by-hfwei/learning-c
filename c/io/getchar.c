// File: getchar.c
// Created by hengxin on 17-10-10.

/**
 * (1) getchar: it does not ignore whitespaces
 * (2) About EOF:
 *   (2.1) ctrl + d on linux (within the terminal instead of the console)
 *   (2.2) ctrl + z on windows
 *   (2.3) at the start of a line: it is
 */

#include <stdio.h>

int main(void) {
    int nc = 0;
    int d = 0;  // getchar(): int
    while ((d = getchar()) != EOF) {
        ++nc;
        printf("%d: %c\n", nc, d);
    }

    printf("%d\n", nc);
}

