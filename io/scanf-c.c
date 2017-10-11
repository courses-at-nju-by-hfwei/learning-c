// File: scanf.c
// Created by hengxin on 17-10-10.

#include <stdio.h>

int main(void) {
    /**
     * Read characters into a char array
     */
    char c[6];
    puts("Enter \"hello:\"");
    for (int i = 0; i < 5; ++i) {
        scanf(" %c", &c[i]);
    }
    c[5] = '\0';
    printf("%s\n", c);

    return 0;
}
