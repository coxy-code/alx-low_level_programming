#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_end = dest;

    // Move 'dest_end' to the end of the destination string.
    while (*dest_end != '\0')
    {
        dest_end++;
    }

    // Append at most 'n' bytes from 'src' to the end of 'dest'.
    while (*src != '\0' && n > 0)
    {
        *dest_end = *src;
        dest_end++;
        src++;
        n--;
    }

    // Add a terminating null byte at the end of the concatenated string.
    *dest_end = '\0';

    return dest;
}

