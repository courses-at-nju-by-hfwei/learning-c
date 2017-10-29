// File: tromino-tiling-vla.c
// Created by hengxin on 17-10-29.
/*
 * Solving the Tromino Tiling puzzle with VLAs.
 * See the file "tromino-tiling" for this puzzle.
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define REMOVED 0
#define INIT (-1)

void solve_tiling(int power, int empty_i, int empty_j);
void generate_checkboard(int size, int checkboard[][size],
                         int empty_i, int empty_j);
void show_checkboard(int size, int checkboard[][size]);

int main(void) {
    int power = 0;
    printf("%s", "Please enter the power k: ");
    scanf("%d", &power);

    // Error: undefined reference to `power` without `lm`
    int size = (int) pow(2, power);
    printf("Please enter the position (i,j) "
                   "of the removed cell (0 <= i, j < %d): ", size);
    int empty_i = 0, empty_j = 0;
    scanf("%d, %d", &empty_i, &empty_j);

    solve_tiling(size, empty_i, empty_j);
}

void solve_tiling(int size, int empty_i, int empty_j) {
    // TODO: generate in a separate function
    int (*checkboard)[size] = malloc( sizeof(int[size][size]) );
    assert(checkboard != NULL);

    generate_checkboard(size, checkboard, empty_i, empty_j);
    show_checkboard(size, checkboard);

    static int tiling_no = 1;

    // TODO: base cases
    if (size == 2) {
        
    }

    int half = size / 2;

    checkboard[half-1][half-1] = tiling_no;
    checkboard[half-1][half] = tiling_no;
    checkboard[half][half-1] = tiling_no;
    checkboard[half][half] = tiling_no;

    if (empty_i < half) {
        if (empty_j < half) {
            checkboard[half-1][half-1] = INIT;
            // TODO: recurse
        } else {
            checkboard[half-1][half] = INIT;
            // TODO: recurse
        }
    } else { // empty_i >= half
        if (empty_j < half) {
            checkboard[half][half-1] = INIT;
            // TODO: recurse
        } else {
            checkboard[half][half] = INIT;
            // TODO: recurse
        }
    }

    show_checkboard(size, checkboard);
}

void generate_checkboard(int size, int checkboard[][size],
                int empty_i, int empty_j) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            checkboard[i][j] = INIT;
        }
    }

    checkboard[empty_i][empty_j] = REMOVED;
}

void show_checkboard(int size, int checkboard[][size]) {
    printf("%s", "\nThe checkboard is: \n");

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d\t", checkboard[i][j]);
        }
        printf("%s", "\n");
    }
}
