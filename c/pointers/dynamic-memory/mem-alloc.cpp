//
// Created by hengxin on 17-9-24.
//

#include <stdio.h>
#include <cstdlib>
#include <cstring>

int main() {
    int *pi = (int*) malloc(sizeof(int));
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);

    // Failing to allocate memory
    // char *name;
    char *name = (char *) malloc(sizeof(char) * 10);
    printf("Enter a name: ");
//    scanf("%s", name);
    printf("The name is: %s.\n", name);

    // Using the calloc Function
    int *pic = (int *) calloc(5, sizeof(int));
    printf("The value of the pointer pic is: %p.\n", pic);
    printf("The value pointed by pic is: %d.\n", *pic);

    // Using the realloc Function
    char *string1;
    char *string2;
    string1 = (char*) malloc(16);
    strcpy(string1, "0123456789AB");

    string2 = (char *) realloc(string1, 8);
    printf("string1 Value: %p [%s].\n", string1, string1);
    printf("string2 Value: %p [%s].\n", string2, string2);

    string1 = (char*) malloc(16);
    strcpy(string1, "0123456789AB");
    string2 = (char *) realloc(string1, 64);
    printf("string1 Value: %p [%s].\n", string1, string1);
    printf("string2 Value: %p [%s].\n", string2, string2);

    // Deallocating Memory Uisng the free Function
    // If the pointer passed to 'free' has been allocated by other than a malloc type function,
    // then the function's behavior is undefined.
//    int num;
//    int *pi_num = &num;
//    free(pi);

    // Assigning NULL to a Freed Pointer

}

