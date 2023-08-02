#include "main.h"

/**
* _strlen_recursion - Returns the length of a string using recursion.
* @s: The input string for which length is to be calculated.
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
/* If we reach the end of the string, return 0. */
return 0;
}
else
{
/* Recursive call with the next character in the string,
* and add 1 to the result (for the current character). */
return 1 + _strlen_recursion(s + 1);
}
}

