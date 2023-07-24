#include "main.h"

/**
* _putchar - Writes a character to the standard output (stdout).
* @c: The character to be written.
*
* Return: On success, the character written is returned.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
* puts2 - Prints every other character of a string, starting with the first character.
* @str: Pointer to the string to be printed.
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2; /* Move to the next even-indexed character */
}

_putchar('\n');
}
