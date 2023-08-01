#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The input string to search.
* @accept: The characters to search for.
*
* Return: A pointer to the first occurrence in @s of any of the bytes in
*         the string @accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;

while (*a != '\0')
{
if (*s == *a)
return s;
a++;
}

s++;
}

return NULL;
}

