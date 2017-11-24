// File: c/string/cstring.c

// Created by hengxin on 17-11-24.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char book[] = "The C Book";
    printf("The book is %s.\n", book);
    printf("The size of the array is: %u.\n", (unsigned) sizeof(book));
    printf("The length of the string is: %u\n", (unsigned) strlen("The C Book"));   // without '\0'

    puts("");

    size_t size = strlen("The C++ Book") + 1;
    char *ptr_book = malloc(size);
    strncpy(ptr_book, "The C++ Book", size);
    ptr_book[size] = '\0';
    printf("The book is %s.\n", ptr_book);

    free(ptr_book);
    return 0;
}
