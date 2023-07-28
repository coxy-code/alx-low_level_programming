#include <stdio.h>

int main(void) {
    int a[5] = {0, 1, 98, 3, 4};
    int *p;

    p = a + 2; /* p points to a[2] */

    printf("a[2] = %d", *p); /* Print a[2] = 98 */
    putchar('\n'); /* Add new line */

    return (0);
}

