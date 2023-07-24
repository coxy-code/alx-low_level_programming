#include "main.h"

/**
* puts2 - Prints every other
*  character of a string.
* @str: The string to print. */
void puts2(char *str)
{
if (str == NULL)
{
_putchar('\n');
return;
}

int i;

for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);

_putchar('\n');
}

