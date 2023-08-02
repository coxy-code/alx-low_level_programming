#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse using recursion.
* @s: The input string to be printed in reverse.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
/* If we reach the end of the string, return. */
return;
}

/* Recursive call with the next character in the string. */
_print_rev_recursion(s + 1);

/* Print the current character after the recursive call (in reverse). */
_putchar(*s);
}

