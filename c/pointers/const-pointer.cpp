// Constants and Pointers
// Created by hengxin on 17-9-24.
//

#include <stdio.h>

int main() {

//    Pointers to a constant
    int num = 5;
    const int limit = 500;

    int *pi = &num;
    const int *pci = &limit;

    printf("num - Address: %p value: %d\n", &num, num);
    printf("limit - Address: %p value: %d\n", &limit, limit);
    printf("pi - Address: %p, value: %p\n", &pi, pi);
    printf("pci - Address: %p, value: %p\n", &pci, pci);

    // (Pointer to non-constant) to a constant
    int *pi_limit = (int *) &limit;
    printf("The value pointed by pi_limit is: %d.\n", *pi_limit);
    *pi_limit = 1000;   // Warning: The constant could be modified. This is not desirable.
    printf("The value pointed by pi_limit is: %d.\n", *pi_limit);

    // (Pointer to constant) to a non-constant
    const int *pci_num = &num;
    printf("num - Address: %p value: %d\n", &num, *pci_num);
//    *pci_num = 10;    // Error

    // Constant pointers to non-constants
    int *const cpi = &num;
//    int *const cpi_limit = &limit;  // Error: invalid conversion from 'const int*' to 'int*'

    // Constant pointers to constants
    const int *const cpci = &limit;
//    const int *const cpci_uninit;     // Error: const object must be initialized

}

