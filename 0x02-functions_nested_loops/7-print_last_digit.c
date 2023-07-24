#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to find the last digit of.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    /* If n is negative, convert it to positive for consistency */
    if (n < 0)
        n = -n;

    last_digit = n % 10;
    _putchar('0' + last_digit);

    return last_digit;
}

