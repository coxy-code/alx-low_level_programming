#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign = -sign;

        if (s[i] >= '0' && s[i] <= '9')
        {
            // Calculate the integer value based on the digit
            result = result * 10 + (s[i] - '0');
            
            // Check for overflow
            if (result > 0 && s[i + 1] < '0')
            {
                if (sign == 1)
                    return (INT_MAX);
                else
                    return (INT_MIN);
            }
        }
        else if (result > 0)
        {
            // If a non-digit character is encountered after the number,
            // break the loop and return the current result
            break;
        }
        i++;
    }

    return (result * sign);
}

