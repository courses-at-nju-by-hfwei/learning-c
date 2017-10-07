// File: sizet.c
// Created by hengxin on 17-10-7.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *copy(size_t n, const char *str);

int main() {
    size_t len = (size_t) INT_MAX + 2;
    char *str = malloc(len);
    for (int i = 0; i < INT_MAX; ++i) {
        str[i] = 'O';
    }
    str[INT_MAX] = '\0';

    // Warning: Don't execute the following statement; it takes too much memory.
    printf("The copy is %s\n", copy(len, str));

    free(str);
}

/**
 * Suggestion 2-3: Using rsize_t or size_t to represent the amount of space
 * Code 1-3 and 1-4
 */
char *copy(size_t n, const char *str) {
    /**
     * `i` in the `for` loop below may run out of the range of `int`.
     * Using `size_t i` instead.
     */
    int i;
    char *p;

    if (n == 0)
        puts("The length to copy is zero.");

    p = malloc(n);

    if (p == NULL) {
        puts("Fail to allocate memory.");
        return p;
    }

    for (i = 0; i < n; ++i) {
        p[i] = *(str++);
    }

    return p;
}

/**
 * Suggestion 2-4: Don't mix `unsigned int` with `size_t`.
 */
void mix() {
    unsigned int x;
    size_t y;
    x = y;
}
