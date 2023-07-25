#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1; /* 1 for positive, -1 for negative */
    int result = 0;
    int i = 0;

    /* Skip leading spaces */
    while (s[i] == ' ')
        i++;

    /* Check for the sign */
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Convert numeric characters to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Check for overflow before adding the next digit */
        if (result > (INT_MAX - (s[i] - '0')) / 10)
        {
            /* Handle overflow by returning the maximum or minimum value of int */
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        /* Convert the digit and add it to the result */
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

