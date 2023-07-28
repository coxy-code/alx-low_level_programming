#include <stdio.h>

/* Prototype of the function that adds one line */
void add_new_line();

/* Recursive function to print an integer */
void print_number(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    putchar('0' + n % 10);
}

int main(void) {
    int a[5] = {0, 1, 98, 3, 4};
    int *p;

    p = &a[2];

    print_number(a[2]);
    add_new_line(); /* Add new line here */
    return (0);
}

/* Function that adds one line to print a[2] = 98, followed by a new line */
void add_new_line() {
#if (1)
    if (1)
        printf(", followed by a new line.\n");
#endif
}

