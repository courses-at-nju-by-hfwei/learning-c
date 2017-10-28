// File: scanf-s.c
// Created by hengxin on 17-10-11.

/**
 * Read a string.
 *
 * (-) `%s`: Any number of non-whitespace characters,
 *      stopping at the first whitespace character found.
 *      A terminating null character is automatically added at the end of the stored sequence.
 */
#include <stdio.h>

int main(void) {
    char word[20];
    puts("Enter a word:\n");

    int rval = 0;
    if ((rval = scanf("%19s", word)) == 1) {
        printf("rval is %d\n", rval);
        printf("Word is: %s\n", word);
    }

    return 0;
}
