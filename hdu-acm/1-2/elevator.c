// File: elevator.c
// Created by hengxin on 17-10-11.

/**
 * Problem 1.2.1: Elevator
 *   The highest building in our city has only one elevator.
 *   A request list is made up with N positive numbers.
 *   The numbers denote at which floors the elevator will stop, in specified order.
 *   It costs 6 seconds to move the elevator up one floor,
 *   and 4 seconds to move down one floor.
 *   The elevator will stay for 5 seconds at each stop.

 *   For a given request list, you are to compute the total time spent
 *   to fulfill the requests on the list.
 *   The elevator is on the 0th floor at the beginning
 *   and does not have to return to the ground floor when the requests are fulfilled.
 *
 * Input:
 *   There are multiple test cases.
 *   Each case contains a positive integer N, followed by N positive numbers.
 *   All the numbers in the input are less than 100.
 *   A test case with N = 0 denotes the end of input.
 *   This test case is not to be processed.
 *
 * Sample Input:
 *   1 2
 *   3 2 3 1
 *   0
 *
 * Output:
 *   Print the total time on a single line for each test case.
 *
 * Sample Output:
 *   17
 *   41
 */

#include <stdio.h>

const int UP_TIME = 6;
const int DOWN_TIME = 4;
const int STAY_TIME = 5;

int main(void) {
    int request_num = 0;
    while (scanf("%d", &request_num) != EOF) {
        if (request_num == 0)
            return 0;
        else {
            int previous = 0, current = 0, gap = 0, time = 0;
            for (int i = 0; i < request_num; ++i) {
                scanf("%d", &current);
                gap = current - previous;

                if (gap > 0)
                    time += gap * UP_TIME;
                else
                    time += gap * (-DOWN_TIME);
                time += STAY_TIME;

                previous = current;
            }
            printf("%d\n", time);
        }
    }

    return 0;
}
