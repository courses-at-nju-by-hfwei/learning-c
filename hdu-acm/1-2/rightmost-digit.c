// File: rightmost-digit
// Created by hengxin on 17-10-12.

/**
 * Problem 1.2.6: Rightmost Digit
 *   Given a positive integer N, you should output the most right digit of N^N.
 *
 * Input:
 *   The input contains several test cases.
 *   The first line of the input is a single integer T which is the number of test cases.
 *   T test cases follow.
 *   Each test case contains a single positive integer N(1<=N<=1,000,000,000).
 *
 * Output:
 *   For each test case, you should output the rightmost digit of N^N.
 */

#include <stdio.h>

#define len(arr) (sizeof(arr) / sizeof(*arr))

int digits2[] = { 2, 4, 8, 6 };
int digits3[] = { 3, 9, 7, 1 };
int digits4[] = { 4, 6 };
int digits7[] = { 7, 9, 3, 1 };
int digits8[] = { 8, 4, 2, 6 };
int digits9[] = { 9, 1 };

int rightmost_digit_naive(long n);
int rightmost_digit_table(long n);

int main(void) {
    int num = 0;
    scanf("%d", &num);

    long n = 0;
    for (int i = 0; i < num; ++i) {
        scanf("%ld", &n);
        int rdigit = rightmost_digit_table(n);
        printf("%d\n", rdigit);
    }
}

/**
 * Naive multiplication method.
 * "Time Limit Exceeded"
 */
int rightmost_digit_naive(long n) {
    int n_rdigit = n % 10;

    int rdigit = 1;
    for (long i = 0; i < n; ++i)
        rdigit = (rdigit * n_rdigit) % 10;

    return rdigit;
}

/**
 * Looking up the table.
 *
 * @implementation The table can be implemented as a hasttable in C++
 * and then switch/case below can be avoided.
 */
int rightmost_digit_table(long n) {
    int n_rdigit = n % 10;

    switch (n_rdigit) {
        case 0:
        case 1:
        case 5:
        case 6:
            return n_rdigit;
        case 2:
            return digits2[(n - 1) % len(digits2)];
        case 3:
            return digits3[(n - 1) % len(digits3)];
        case 4:
            return digits4[(n - 1) % len(digits4)];
        case 7:
            return digits7[(n - 1) % len(digits7)];
        case 8:
            return digits8[(n - 1) % len(digits8)];
        case 9:
            return digits9[(n - 1) % len(digits9)];
        default:    // never
            return -1;
    }
}
