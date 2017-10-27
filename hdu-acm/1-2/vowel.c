// File: vowel.c
// Created by hengxin on 17-10-12.

/**
 * Problem 1.2.8: Vowel Counting
 *   The "Vowel-Counting-Word"(VCW), complies with the following conditions.
 *   Each vowel in the word must be uppercase.
 *   Each consonant (the letters except the vowels) must be lowercase.
 *   For example, "ApplE" is the VCW of "aPPle", "jUhUA" is the VCW of "Juhua".
 *   Give you some words; your task is to get the "Vowel-Counting-Word" of each word.
 *
 * Input:
 *   The first line of the input contains an integer T (T<=20)
 *   which means the number of test cases.
 *   For each case, there is a line contains the word
 *   (only contains uppercase and lowercase).
 *   The length of the word is not greater than 50.
 *
 * Sample Input:
 *   4
 *   XYz
 *   application
 *   qwcvb
 *   aeioOa
 *
 * Output:
 *   For each case, output its Vowel-Counting-Word.
 *
 * Sample Output:
 *   xyz
 *   ApplIcAtIOn
 *   qwcvb
 *   AEIOOA
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 52

void vowel_counting(char *word);
char vowel_counting_ch(char ch);
int is_vowel(char ch);

int main(void) {
    int num = 0;
    scanf("%d", &num);
    getchar();  // Notice: consuming the trailing '\n'

    char word[MAX_LEN];
    for (int i = 0; i < num; ++i) {
        fgets(word, MAX_LEN, stdin);    // Notice: fgets contains '\n'
        vowel_counting(word);
        fputs(word, stdout);
    }
}

void vowel_counting(char *word) {
    int index = 0;
    char ch;
    while ((ch = word[index]) != '\0') {
        word[index] = vowel_counting_ch(ch);
        index++;
    }
}

char vowel_counting_ch(char ch) {
    if (is_vowel(ch))
        return toupper(ch);
    else
        return tolower(ch); // ch may be unchanged (e.g., '\n')
}

int is_vowel(char ch) {
    return  (ch == 'a' || ch == 'o' || ch == 'e' || ch == 'i' || ch == 'u' ||
        ch == 'A' || ch == 'O' || ch == 'E' || ch == 'I' || ch == 'U' );
}
