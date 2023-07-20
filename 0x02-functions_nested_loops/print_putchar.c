#include "main.h"

/**
 * print_putchar - Prints "_putchar" followed by a new line
 */
void print_putchar(void)
{
    char text[] = "_putchar\n";
    int i = 0;

    while (text[i] != '\0')
    {
        _putchar(text[i]);
        i++;
    }
}
