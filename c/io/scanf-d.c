// File: scanf-d.c
// Created by hengxin on 17-10-11.
//

#include <stdio.h>

int main(void) {
    /**
     * Read two integers
     */
    int a = 0, b = 0;
    puts("Enter two integers, separated by spaces.");
    int rval = scanf("%d %d", &a, &b);
    printf("rval is: %d\n", rval);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
