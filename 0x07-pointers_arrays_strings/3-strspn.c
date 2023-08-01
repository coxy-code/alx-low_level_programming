#include "main.h"

/**
* _strspn - Gets the length of a prefix substring that consists of only
* characters present in accept.
* @s: The input string.
* @accept: The characters to be accepted.
*
* Return: The number of bytes in the initial segment of s which consist
*         only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
char *a = accept;

while (*a != '\0')
{
if (*s == *a)
{
count++;
break;
}
a++;
}

if (*a == '\0')
break;

s++;
}

return (count);
}
