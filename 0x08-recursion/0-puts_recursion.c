#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        /* If we reach the end of the string, print a new line and return. */
        _putchar('\n');
        return;
    }

    /* Print the current character and move to the next character in the string. */
    _putchar(*s);

    /* Recursive call with the next character in the string. */
    _puts_recursion(s + 1);
}

