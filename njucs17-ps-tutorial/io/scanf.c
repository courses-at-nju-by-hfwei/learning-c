// File: scanf.c
// Created by hengxin on 17-10-18.

#include <stdio.h>

int main(void) {
    /**
     * Copied from http://www.cplusplus.com/reference/cstdio/scanf/
     */
    char str [80];
    int i = 0;

    printf ("Enter your family name: ");
    scanf ("%79s", str);
    printf ("Enter your age: ");
    scanf ("%d", &i);
    printf ("Mr. %s , %d years old.\n", str, i);
    printf ("Enter a hexadecimal number: ");
    scanf ("%x", &i);
    printf ("You have entered %#x (%d).\n", i, i);

    /**
     * Adapted from K&R (Page 159)
     */
    int day = 0, year = 0;
    char month_name[10] = {};

//    puts("Enter day, month name, and year, separated by spaces.");
//    scanf("%d %s %d", &day, month_name, &year);
//    printf("%d %s %d\n", day, month_name, year);

    /**
     * input: 10 Dec 2018
     * check the return value
     */
//    puts("Enter day, month name, and year, separated by a comma.");
//    scanf("%d, %s, %d", &day, month_name, &year);
//    printf("%d, %s, %d\n", day, month_name, year);

//    puts("Enter day, month name, and year, separated by a slash.");
//    scanf("%d/%s/%d", &day, month_name, &year);
//    printf("%d/%s/%d\n", day, month_name, year);

    return 0;
}
