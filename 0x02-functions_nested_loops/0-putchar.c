#include <stdio.h>

int _putchar(char c);

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/**
 * _putchar - Custom putchar function.
 * @c: The character to be printed.
 *
 * Return: On success, returns the character to be printed.
 * On error, returns -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

