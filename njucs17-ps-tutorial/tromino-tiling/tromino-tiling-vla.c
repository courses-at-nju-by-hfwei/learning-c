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

// TODO: make "size" and "checkboard" global
// TODO: UI (colors)

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
    tiling_no++;

    int base_x = (board.left_upper_cell.x + board.right_lower_cell.x) / 2;
    int base_y = (board.left_upper_cell.y + board.right_lower_cell.y) / 2;

    // the base cases
    if (board.right_lower_cell.x - board.left_upper_cell.x + 1 == 2) {
        int temp_tiling_no = checkboard[cell.x][cell.y];

        checkboard[base_x][base_y] = tiling_no;
        checkboard[base_x + 1][base_y] = tiling_no;
        checkboard[base_x][base_y + 1] = tiling_no;
        checkboard[base_x + 1][base_y + 1] = tiling_no;

        checkboard[cell.x][cell.y] = temp_tiling_no;

        show_checkboard(size, checkboard);
        return;
    }

    Cell left_upper_center_cell = {.x = base_x, .y = base_y};
    Cell left_lower_center_cell = {.x = base_x + 1, .y = base_y};
    Cell right_upper_center_cell = {.x = base_x, .y = base_y + 1};
    Cell right_lower_center_cell = {.x = base_x + 1, .y = base_y + 1};

    Cell left_corner_of_right_upper_half_board = {
            .x = board.left_upper_cell.x,
            .y = base_y + 1
    };
    Cell right_corner_of_right_upper_half_board = {
            .x = base_x,
            .y = board.right_lower_cell.y
    };
    Cell left_corner_of_left_lower_half_board = {
            .x = base_x + 1,
            .y = board.left_upper_cell.y
    };
    Cell right_corner_of_left_lower_half_board = {
            .x = board.right_lower_cell.x,
            .y = base_y
    };

    Board left_upper_half_board = {.left_upper_cell = board.left_upper_cell,
            .right_lower_cell = left_upper_center_cell};
    Board right_upper_half_board = {.left_upper_cell = left_corner_of_right_upper_half_board,
            .right_lower_cell = right_corner_of_right_upper_half_board};
    Board left_lower_half_board = {.left_upper_cell = left_corner_of_left_lower_half_board,
            .right_lower_cell = right_corner_of_left_lower_half_board};
    Board right_lower_half_board = {.left_upper_cell = right_lower_center_cell,
            .right_lower_cell = board.right_lower_cell};

    if (cell.x <= base_x) {
        if (cell.y <= base_y) {   // the empty cell is in the left_upper_half_board
            checkboard[base_x][base_y + 1] = tiling_no;
            checkboard[base_x + 1][base_y] = tiling_no;
            checkboard[base_x + 1][base_y + 1] = tiling_no;
            show_checkboard(size, checkboard);

            solve_tiling(size, checkboard, cell, left_upper_half_board);
            solve_tiling(size, checkboard, right_upper_center_cell, right_upper_half_board);
            solve_tiling(size, checkboard, left_lower_center_cell, left_lower_half_board);
            solve_tiling(size, checkboard, right_lower_center_cell, right_lower_half_board);
        } else {    // the empty cell is in the right_upper_half_board
            checkboard[base_x][base_y] = tiling_no;
            checkboard[base_x + 1][base_y] = tiling_no;
            checkboard[base_x + 1][base_y + 1] = tiling_no;
            show_checkboard(size, checkboard);

            solve_tiling(size, checkboard, left_upper_center_cell, left_upper_half_board);
            solve_tiling(size, checkboard, cell, right_upper_half_board);
            solve_tiling(size, checkboard, left_lower_center_cell, left_lower_half_board);
            solve_tiling(size, checkboard, right_lower_center_cell, right_lower_half_board);
        }
    } else { // cell.x > base_x
        if (cell.y <= base_y) {   // the empty cell is in the left_lower_half_board
            checkboard[base_x][base_y] = tiling_no;
            checkboard[base_x][base_y + 1] = tiling_no;
            checkboard[base_x + 1][base_y + 1] = tiling_no;
            show_checkboard(size, checkboard);

            solve_tiling(size, checkboard, left_upper_center_cell, left_upper_half_board);
            solve_tiling(size, checkboard, right_upper_center_cell, right_upper_half_board);
            solve_tiling(size, checkboard, cell, left_lower_half_board);
            solve_tiling(size, checkboard, right_lower_center_cell, right_lower_half_board);
        } else {    // the empty cell is in the right_lower_half_board
            checkboard[base_x][base_y] = tiling_no;
            checkboard[base_x][base_y + 1] = tiling_no;
            checkboard[base_x + 1][base_y] = tiling_no;
            show_checkboard(size, checkboard);

            solve_tiling(size, checkboard, left_upper_center_cell, left_upper_half_board);
            solve_tiling(size, checkboard, right_upper_center_cell, right_upper_half_board);
            solve_tiling(size, checkboard, left_lower_center_cell, left_lower_half_board);
            solve_tiling(size, checkboard, cell, right_lower_half_board);
        }
    }
}
