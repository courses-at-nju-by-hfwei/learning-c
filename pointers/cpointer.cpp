#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // Page 4
    char *names[] = {"Miller", "Jones", "Anderson"};
    printf("%c\n", *(*(names + 1) + 2));
    printf("%c\n", names[1][2]);

    // Declaring Pointers
    int num;
    int *pi = &num;
    printf("The num is %d.\n", num);
    printf("The address of the variable number is %x.\n", &num);
    printf("The value of the pointer is %x.\n", pi);
    printf("The num the pointer points to is %d.\n", *pi);

    // Error: invalid conversion from int to int*
    // pi = num;  

    // Warning: cast to pointer from integer of different size
    // pi = (int*) num;

    // Displaying Pointer Values
    printf("Value of pi: %p.\n", (void*) pi);

    // The Concept of Null
    if(pi) {
        cout << "Not Null" << endl;
    } else {
        cout << "Null" << endl;
    }

    // Understanding site_t
    size_t sizet = -5;
    printf("%d\n", sizet);
    printf("%zu\n", sizet);

    // Using the sizeof operator with pointers
    printf("Size of *char: %d.\n", sizeof(char*));

    // Using intptr_t and uintptr_t

    // Pointer Arithmetic
    int vector[] = {28, 41, 7};
    pi = vector;
    printf("%p\n", pi);
    printf("%d\n", *pi);  // 28
    pi += 1;
    printf("%p\n", pi);
    printf("%d\n", *pi);  // 41
    pi += 1;
    printf("%p\n", pi);
    printf("%d\n", *pi);  // 7
    pi += 1;
    printf("%p\n", pi);
    printf("%d\n", *pi);

    // Pointers to void and addition
    num = 5;
    void *pv = &num;
    printf("%p\n", pv);
    pv += 1;    // Warning: pointer of type 'void *' used in arithemetic

    // Subtracting two pointers
    int *p0 = vector;
    int *p1 = vector + 1;
    int *p2 = vector + 2;
    printf("p0-p1: %d\n", p0 - p1);

    // Multiple Levels of Indirection
    char *titles[] = {
        "A Tale of Two Cities",
        "Wuthering Heights",
        "Don Quixote",
        "Odyssey",
        "Moby-Dick",
        "Hamlet",
        "Gulliver's Travels"
    };

    char **bestBooks[3] = {
        &titles[0],
        &titles[3],
        &titles[5]
    };

    char **englishBooks[4] = {
        &titles[0],
        &titles[1],
        &titles[5],
        &titles[6]
    };

    printf("%s\n", *englishBooks[1]);

    // Constants and Pointers
}