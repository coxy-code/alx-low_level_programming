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

return (length);
}

/**
* rev_string - Reverses a string.
* @s: Pointer to the string to be reversed.
*/
void rev_string(char *s)
{
int len = _strlen(s);
int i;
char temp;

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
