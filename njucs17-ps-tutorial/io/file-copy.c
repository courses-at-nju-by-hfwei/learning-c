// File: file-copy.c
// Created by hengxin on 17-10-18.

/**
 * Copying file character by character using getchar().
 *
 * K&R Section 1.5.1
 *
 * Practice:
 *   - file-copy
 *   - count lines
 */

/**
 * EOF: http://www.cplusplus.com/reference/cstdio/EOF/ (文件结束符)：由宏定义的整型数
 * \begin{itemize}
 *   \item EOF 是整型数 (int c; != EOF)
 *   \item EOF 不是实际字符, 不同于行结束符 "\n" (== "\n")
 *   \item EOF 不单单指示``文件''的结束, 而是指示字符流的结束
 * \end{itemize}
 */

#include <stdio.h>

int main(void) {
    int c = 0;  // int, not char

    while ((c = getchar()) != EOF) // EOF, not -1
        putchar(c);

    return 0;
}
