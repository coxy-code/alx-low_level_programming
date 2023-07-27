#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: Pointer to the resulting string 'dest'.
*/
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

// Move 'dest_end' to the end of the destination string.
while (*dest_end != '\0')
{
dest_end++;
}

// Append the characters of 'src' to the end of 'dest'.
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}

// Add a terminating null byte at the end of the concatenated string.
*dest_end = '\0';

return dest;
}

