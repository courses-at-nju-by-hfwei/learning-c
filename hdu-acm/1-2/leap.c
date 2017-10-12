// File: leap.c
// Created by hengxin on 17-10-12.

/**
 * Problem 1.2.5: The Next N-th Leap Year (An Easy Task)
 *
 *   Ignatius was born in a leap year, so he want to know when he could hold his birthday party.
 *   Can you tell him?
 *   Given a positive integers Y which indicate the start year,
 *   and a positive integer N, your task is to tell the Nth leap year from year Y.
 *   Note: if year Y is a leap year, then the 1st leap year is year Y.
 *
 * Input:
 *   The input contains several test cases.
 *   The first line of the input is a single integer T which is the number of test cases.
 *   T test cases follow.
 *   Each test case contains two positive integers Y and N(1<=N<=10000).
 *
 * Output:
 *   For each test case, you should output the Nth leap year from year Y.
 */

#include <stdio.h>

int find_nth_leap(int year, int n);
int ceil_leap(int year);
int is_leap(int year);
int is_not_leap_100(int year);

int main(void) {
    int num = 0;
    scanf("%d", &num);

    int start_year = 0, n = 0, end_year = 0;
    while (scanf("%d %d", &start_year, &n) != EOF) {
        end_year = find_nth_leap(start_year, n);
        printf("%d\n", end_year);
    }

    return 0;
}

int find_nth_leap(int year, int n) {
    // rounding to the next leap year (maybe unchanged)
    year = ceil_leap(year);

    for (int i = 0; i < n - 1; ++i) {
        year += 4;
        if (is_not_leap_100(year))
            i--;
    }

    return year;
}

int ceil_leap(int year) {
    if (is_leap(year))
        return year;

    year += (4 - year % 4);

    if (is_not_leap_100(year))
        return year + 4;

    return year;
}

int is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int is_not_leap_100(int year) {
    return year % 100 == 0 && year % 400 != 0;
}
