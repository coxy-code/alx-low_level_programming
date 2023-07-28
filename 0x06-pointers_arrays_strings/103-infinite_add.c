#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int carry = 0;
    int sum = 0;
    int i = 0;
    int len1 = 0;
    int len2 = 0;

    while (n1[len1] != '\0')
        len1++;

    while (n2[len2] != '\0')
        len2++;

    if (len1 >= size_r || len2 >= size_r)
        return (0);

    len1--;
    len2--;
    size_r--;
    r[size_r] = '\0';

    while (len1 >= 0 || len2 >= 0) {
        sum = carry;
        if (len1 >= 0)
            sum += n1[len1--] - '0';
        if (len2 >= 0)
            sum += n2[len2--] - '0';

        carry = sum / 10;
        r[size_r--] = (sum % 10) + '0';
    }

    if (carry && size_r >= 0)
        r[size_r--] = carry + '0';

    if (size_r == -1)
        return (0);

    return (r + size_r + 1);
}

