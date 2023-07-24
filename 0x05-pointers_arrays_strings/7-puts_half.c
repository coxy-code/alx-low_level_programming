#include "main.h"

/**
* puts_half - Prints the second half of a string.
* @str: The string to print.
*/
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
length++;

for (i = (length + 1) / 2; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');
}

