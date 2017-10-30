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

typedef struct _cell {
    int x;
    int y;
} Cell;

typedef struct _broad {
    Cell left_upper_cell;
    Cell right_lower_cell;
} Board;

void solve_tiling(int size, int checkboard[][size], Cell cell, Board board);
void generate_checkboard(int size, int checkboard[][size], Cell cell);
void show_checkboard(int size, int checkboard[][size]);

int main(void) {
    int power = 0;
    printf("%s", "Please enter the power k: ");
    scanf("%d", &power);

    // Error: undefined reference to `power` without `lm`
    int size = (int) pow(2, power);
    printf("Please enter the position (i,j) "
                   "of the removed cell (0 <= i, j < %d): ", size);
    Cell cell;
    scanf("%d, %d", &cell.x, &cell.y);

    int (*checkboard)[size] = malloc( sizeof(int[size][size]) );
    assert(checkboard != NULL);

    generate_checkboard(size, checkboard, cell);
    show_checkboard(size, checkboard);

    Cell left_upper_cell = {.x = 0, .y = 0};
    Cell right_lower_cell = {.x = size - 1, .y = size - 1};
    Board board = {.left_upper_cell = left_upper_cell, .right_lower_cell = right_lower_cell};
    solve_tiling(size, checkboard, cell, board);
}

void generate_checkboard(int size, int checkboard[][size], Cell cell) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            checkboard[i][j] = INIT;
        }
    }

    checkboard[cell.x][cell.y] = REMOVED;
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

void solve_tiling(int size, int checkboard[][size], Cell cell, Board board) {
    static int tiling_no = 0;

    // TODO: base cases
    if (board.right_lower_cell.x - board.left_upper_cell.x + 1 == 2) {

    }

    int base = (board.left_upper_cell.x + board.right_lower_cell.x) / 2;

    tiling_no++;
    checkboard[base][base] = tiling_no;
    checkboard[base + 1][base] = tiling_no;
    checkboard[base][base + 1] = tiling_no;
    checkboard[base + 1][base + 1] = tiling_no;

    Cell base_base_cell = {.x = base, .y = base};
    Cell base1_base_cell = {.x = base + 1, .y = base};
    Cell base_base1_cell = {.x = base, .y = base + 1};
    Cell base1_base1_cell = {.x = base + 1, .y = base + 1};

    Cell base1_boardluy_cell = {.x = base + 1, .y = board.left_upper_cell.y};
    Cell boardrlx_base_cell = {.x = board.right_lower_cell.x, .y = base};
    Cell boardlux_base1_cell = {.x = board.left_upper_cell.x, .y = base + 1};
    Cell base_boardrly_cell = {.x = base, .y = board.right_lower_cell.y};

    Board half_board;
    if (cell.x <= base) {
        if (cell.y <= base) {
            checkboard[base][base] = INIT;
            checkboard[cell.x][cell.y] = REMOVED;   // reset

            // 1st
            half_board.left_upper_cell = board.left_upper_cell;
            half_board.right_lower_cell = base_base_cell;
            solve_tiling(size, checkboard, cell, half_board);

            // 2nd
            half_board.left_upper_cell = base1_boardluy_cell;
            half_board.right_lower_cell = boardrlx_base_cell;
            solve_tiling(size, checkboard, base1_base_cell, half_board);

            // 3nd
            half_board.left_upper_cell = boardlux_base1_cell;
            half_board.right_lower_cell = base_boardrly_cell;
            solve_tiling(size, checkboard, base_base1_cell, half_board);
            // 4th

            half_board.left_upper_cell = base1_base1_cell;
            half_board.right_lower_cell = board.right_lower_cell;
            solve_tiling(size, checkboard, base1_base1_cell, half_board);
            // TODO: recurse
        } else {
            checkboard[base][base + 1] = INIT;
            checkboard[cell.x][cell.y] = REMOVED;   // reset
            // TODO: recurse
        }
    } else { // cell.x > base
        if (cell.y <= base) {
            checkboard[base + 1][base] = INIT;
            checkboard[cell.x][cell.y] = REMOVED;   // reset
            // TODO: recurse
        } else {
            checkboard[base + 1][base + 1] = INIT;
            checkboard[cell.x][cell.y] = REMOVED;   // reset
            // TODO: recurse
        }
    }


    show_checkboard(size, checkboard);
}
