// File: scanf-dc.c
// Created by hengxin on 17-10-11.

#include <stdio.h>

int main(void) {
    /**
     * Read an integer and a char
     * Legal inputs: `100a`
     */
    int d = 0;
    char ch = '\0';
    puts("Enter an integer followed by a char");
    int rval = scanf("%d %c", &d, &ch);
    printf("rval is: %d\n", rval);
    printf("d = %d, ch = %c\n", d, ch);

}

