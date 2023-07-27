#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @str: Pointer to the input string.
*
* Return: Pointer to the modified string.
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}

return (str);
}

