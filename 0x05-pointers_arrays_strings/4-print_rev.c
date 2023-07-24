#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return length;
}

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: Pointer to the string to be printed in reverse.
*/
void print_rev(char *s)
{
int len = _strlen(s);

while (len > 0)
{
_putchar(s[len - 1]);
len--;
}
_putchar('\n');
}
