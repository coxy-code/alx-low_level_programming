#include "main.h"

int main(void) {
    int a[5] = {0, 1, 98, 3, 4};
    int *p;

    p = a + 2; /* p points to a[2] */

    print_number(*p); /* Print a[2] = 98 */
    add_new_line(); /* Add new line */

    return (0);
}

