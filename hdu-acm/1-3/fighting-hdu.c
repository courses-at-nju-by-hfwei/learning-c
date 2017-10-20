// File: fighting-hdu
// Created by hengxin on 17-10-18.

/**
 * Problem 1.3.4:
 *
 * To learn: Struct and pointers to Struct
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_OF_PLAYERS 100

typedef struct {
    int ch_score;
    int japan_score;
} scores;

typedef scores *ptr_scores;

void play(int *ch_players, int *japan_players, int num_of_players, ptr_scores score);
int compare(const void *lcap, const void *rcap);

int main(void) {
    int num_of_players = 0;
    int ch_players[MAX_NUM_OF_PLAYERS], japan_players[MAX_NUM_OF_PLAYERS];
    ptr_scores score = malloc(sizeof(scores));

    while (scanf("%d", &num_of_players) && num_of_players != 0) {
        for (int i = 0; i < num_of_players; ++i)
            scanf("%d", &ch_players[i]);

        for (int i = 0; i < num_of_players; ++i)
            scanf("%d", &japan_players[i]);

        play(ch_players, japan_players, num_of_players, score);
        printf("%d vs %d\n", score->ch_score, score->japan_score);
    }

    return 0;
}

void play(int *ch_players, int *japan_players, int num_of_players, ptr_scores score) {
    qsort(ch_players, num_of_players, sizeof(*ch_players), compare);
    qsort(japan_players, num_of_players, sizeof(*ch_players), compare);

    for (int i = 0; i < num_of_players; ++i) {
        if (ch_players[i] < japan_players[i])
            score->japan_score += 2;
        else if (ch_players[i] > japan_players[i])
            score->ch_score += 2;
        else {  // ==
            score->ch_score += 1;
            score->japan_score += 1;
        }
    }
}

int compare(const void *lcap, const void *rcap) {
    return *((int *) lcap) - *((int *) rcap);
}
