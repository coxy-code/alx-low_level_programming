#include "main.h"

/**
 * _putchar - Custom function to print a single character.
 * @c: The character to be printed.
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        // If we reach the end of the string, print a new line and return.
        _putchar('\n');
        return;
    }

    // Print the current character and move to the next character in the string.
    _putchar(*s);

    // Recursive call with the next character in the string.
    _puts_recursion(s + 1);
}

