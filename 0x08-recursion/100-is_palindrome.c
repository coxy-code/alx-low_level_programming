#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = 0;
    int i;

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Base case: An empty string is a palindrome */
    if (length <= 1)
    {
        return 1;
    }

    /* Compare characters from both ends of the string */
    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            return 0; /* Not a palindrome */
        }
    }

    return 1; /* The string is a palindrome */
}

