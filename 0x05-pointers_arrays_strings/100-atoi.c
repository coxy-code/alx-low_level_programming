#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Initialize sign to positive
    int digit;

    // Skip leading non-digit characters
    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            sign *= -1; // Toggle the sign when encountering a minus sign
        s++;
    }

    // Convert the digits to an integer
    while (*s && (*s >= '0' && *s <= '9'))
    {
        digit = *s - '0'; // Convert the character to the corresponding digit
        // Check for overflow before updating the result
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
            return (sign == 1 ? INT_MAX : INT_MIN); // Return the maximum or minimum integer on overflow
        result = result * 10 + digit;
        s++;
    }

    return result * sign; // Apply the sign to the final result
}

