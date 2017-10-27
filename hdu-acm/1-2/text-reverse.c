// File: text-reverse.c
// Created by hengxin on 17-10-11.

/**
 * Problem 1.2.4: Text Reverse
 *   Ignatius likes to write words in reverse way.
 *   Given a single line of text which is written by Ignatius,
 *   you should reverse all the words and then output them.
 *
 * Input:
 *   The input contains several test cases.
 *   The first line of the input is a single integer T
 *   which is the number of test cases.
 *   T test cases follow.
 *   Each test case contains a single line with several words.
 *   There will be at most 1000 characters in a line.
 *
 * Sample Input:
 *   3
 *   olleh !dlrow
 *   m'I morf .udh
 *   I ekil .mca
 *
 * Output:
 *   For each test case, you should output the text which is processed.
 *
 * Sample Output:
 *   hello world!
 *   I'm from hdu.
 *   I like acm.
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1001

void reverse_line(char *line);
void reverse_word(char *line, int start, int end);
int consume_spaces(char *line, int current);

int main(void) {
    int num = 0;
    scanf("%d", &num);
    getchar();  // consume the following `\n`

    char line[MAX_LENGTH];
    for (int i = 0; i < num; ++i) {
        fgets(line, MAX_LENGTH, stdin);
        reverse_line(line);
        printf("%s", line); // line contains `\n` itself.
    }

    return 0;
}

void reverse_line(char *line) {
    int start = 0, current = 0, end = 0;
    char ch;
    while ((ch = line[current]) != '\0') {
        if (isspace(ch)) {
            end = current - 1;
            reverse_word(line, start, end);
            start = consume_spaces(line, current);
            if (line[start] == '\0')
                break;
            current = start;
        }
        current++;
    }
}

void reverse_word(char *line, int start, int end) {
    char ch;
    while (start < end) {
        ch = line[start];
        line[start] = line[end];
        line[end] = ch;

        start++;
        end--;
    }
}

int consume_spaces(char *line, int current) {
    while (isspace(line[current]))
        current++;

    return current;
}
