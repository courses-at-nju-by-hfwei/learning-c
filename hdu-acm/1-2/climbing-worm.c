// File: climbing-worm.c
// Created by hengxin on 17-10-11.

/**
 * Problem 1.2.3: Climbing Worm
 *  An inch worm is at the bottom of a well n inches deep.
 *  It has enough energy to climb u inches every minute,
 *  but then has to rest a minute before climbing again.
 *  During the rest, it slips down d inches.
 *  The process of climbing and resting then repeats.
 *  How long before the worm climbs out of the well?
 *  We'll always count a portion of a minute as a whole minute
 *  and if the worm just reaches the top of the well at the end of its climbing,
 *  we'll assume the worm makes it out.
 *
 * Input:
 *   There will be multiple problem instances.
 *   Each line will contain 3 positive integers n, u and d.
 *   These give the values mentioned in the paragraph above.
 *   Furthermore, you may assume d < u and n < 100.
 *   A value of n = 0 indicates end of output.
 *
 * Output:
 *   Each input instance should generate a single integer on a line,
 *   indicating the number of minutes it takes for the worm to climb out of the well.
 */

#include <stdio.h>

int main(void) {
    int n = 0, up = 0, down = 0;

    while(scanf("%d %d %d", &n, &up, &down) == 3) {
        if (n == 0)
            return 0;

        int minute = 0, height = 0;
        do {
            height += up;
            minute++;
            if (height >= n)
                break;

            height -= down;
            minute++;
        } while (height < n);
        printf("%d\n", minute);
    }
}
