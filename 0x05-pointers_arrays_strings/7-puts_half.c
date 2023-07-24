#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: The input string.
*
* Return: The length of the string.
*/
int _strlen(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;

return len;
}

/**
* puts_half - Prints the second half of a string.
* @str: The input string.
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start_index;

if (length % 2 == 0)
start_index = length / 2;
else
start_index = (length + 1) / 2;

for (int i = start_index; i < length; i++)
putchar(str[i]);

putchar('\n');
}

