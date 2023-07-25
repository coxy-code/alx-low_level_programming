#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Sign of the number, 1 for positive, -1 for negative

    // Skip leading white spaces
    while (*s == ' ')
        s++;

    // Check for the sign of the number
    while (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign *= -1;
        s++;
    }

    // Convert the remaining digits to integer
    while (*s >= '0' && *s <= '9')
    {
        // Check for integer overflow
        if (result > (INT_MAX - (*s - '0')) / 10)
        {
            return (sign == 1 ? INT_MAX : INT_MIN);
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return (result * sign);
}

