// File: array-1d.c
// Created by hengxin on 17-11-2.

/**
 * Illustrating the relation between pointers and 1D arrays.
 */

#include <stdio.h>

void print(int [5]);

int main(void) {
    int a[5] = {1,2,3,4,5};
    print(a);

    /**
     * What are:
     *   - a
     *   - &a[0]
     *   - &a
     */
    printf("The address represented by \"a\" is: %p.\n",
           a);
    printf("The address represented by \"&a[0]\" is: %p.\n",
           &a[0]);
    printf("The address represented by \"&a\" is: %p.\n",
           &a);

    /**
     * meaning of "a"
     */
//    int *ptr_soldiers = a;

    printf("\nThe address represented by \"a\" is: %p.\n",
           a);
    printf("\"a + 1\" is: %p.\n",
           a + 1);
    /**
     * meaning of "&a[0]"
     */
    printf("\nThe address represented by \"&a[0]\" is: %p.\n",
           &a[0]);
    printf("\"&a[0] + 1\" is: %p.\n",
           &a[0] + 1);

    /**
     * meaning of "&a"
     */
    printf("\nThe address represented by \"&a\" is: %p.\n",
           &a);
    printf("\"&a + 1\" is: %p.\n",
           &a + 1);

    return 0;
}

/**
 * 5 here will be ignored (citation?)
 * The parameter is of type "int *"
 */
void print(int a[5]) {
    for (int i = 0; i < 5; ++i) {
        printf("a[%d], Address: %p, Value: %d\n",
               i, &a[i], a[i]);
    }
}
