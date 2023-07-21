#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a new line.
 */
void print_alphabet_x10(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        print_alphabet();
        _putchar('\n');
    }
}

