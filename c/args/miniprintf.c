// File: c/args/miniprintf.c

// Created by hengxin on 17-11-23.

/*
 * A minimal printf function
 * for illustrating the use of variable-length argument list.
 *
 * For programming tutorial 1-5 on C library <stdarg.h>.
 */

#include <stdio.h>
#include <stdarg.h>

void miniprintf(const char *format, ...);

int main(void) {
    double pi = 3.14;
    int num = 42;
    char ch = 'a';
    char str[] = "hello";

    miniprintf("%f%d%c", pi, num, ch);
    puts("");
    miniprintf("%f%d%s", pi, num, str);
}

void miniprintf(const char *format, ...) {
    va_list ap; // "argument pointer"

    va_start(ap, format);

    int ival = 0;
    double dval = 0.0;
    char cval = '\0', specifier = '\0', ch;
    for (const char *p = format; (ch = *p) != '\0'; ++p) {
        if (ch != '%') {
            putchar(ch);
            continue;
        }

        switch (specifier = *++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("Int: %d\n", ival);
                break;
            case 'f':
                dval = va_arg(ap, double);
                printf("Double: %f\n", dval);
                break;
            case 'c':
                cval = (char) va_arg(ap, int);  // not: va_arg(ap, int)
                printf("Char: %c\n", cval);
                break;
            default:    // cannot handle with other cases
                printf("Cannot handle with this specifier: %c.\n", specifier);
                break;
        }
    }

    va_end(ap); // clear-up
}
