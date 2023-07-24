#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character (uppercase or lowercase).
 * @c: The character to check.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

