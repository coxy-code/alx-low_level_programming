#include "main.h"

/* Function to print a single character */
void _putchar(char c) {
    /* Your implementation of _putchar here */
}

/* Recursive function to print a positive integer */
void print_positive_number(unsigned int n) {
    if (n / 10 != 0) {
        print_positive_number(n / 10);
    }
    _putchar('0' + n % 10);
}

/* Function to print an integer */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n == 0) {
        _putchar('0');
    } else {
        print_positive_number(n);
    }
}

