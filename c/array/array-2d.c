// File: array-2d.c
// Created by hengxin on 17-11-2.

/**
 * Illustrating how a 2D array is stored in memory.
 */
#include <stdio.h>

int main(void) {
    /**
     * Part I
     */
    // declare and initialize a 2D array
    int a[3][5] = {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13}
    };

    /**
     * A 2D array is stored in rows in memory.
     */
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("a[%d][%d], Address: %p, Value: %d\n",
                   i, j, &a[i][j], a[i][j]);
        }
    }

    printf("%p", *a);
    printf("a[2][1] is: %d.\n",
        *((*(a + 2)) + 1));

    /**
     * (Part II)
     *
     * What are:
     *   - a
     *   - &a[0]
     *   - a[0]
     *   - &a[0][0]
     *   - &a
     */
    printf("The address represented by \"a\" is: %p.\n",
           a);
    printf("The address represented by \"&a[0]\" is: %p.\n",
           &a[0]);
    printf("The address represented by \"a[0]\" is: %p.\n",
           a[0]);
    printf("The address represented by \"&a[0][0]\" is: %p.\n",
           &a[0][0]);

    /**
     * The meaning of "a"
     */
    printf("\nThe address represented by \"a\" is: %p.\n",
           a);
    printf("a + 1 is: %p.\n", a + 1);
    // Error: a ++;

    /**
     * The meaning of "&a[0]"
     */
    printf("\nThe address represented by \"&a[0]\" is: %p.\n",
           &a[0]);
    printf("&a[0] + 1 is: %p.\n", &a[0] + 1);

    /**
     * The meaning of "a[0]"
     */
    printf("\nThe address represented by \"&a[0]\" is: %p.\n",
           a[0]);
    printf("a[0] + 1 is: %p.\n", a[0] + 1);

    /**
     * The meaning of "&a[0][0]"
     */
    printf("\nThe address represented by \"&a[0][0]\" is: %p.\n",
           &a[0][0]);
    printf("&a[0][0] + 1 is: %p\n", &a[0][0] + 1);

    /**
     * The meaning of "&a"
     */
    printf("\nThe address represented by \"&a\" is: %p.\n",
           &a);
    printf("&a + 1 is: %p.\n", &a + 1);

    return 0;
}
