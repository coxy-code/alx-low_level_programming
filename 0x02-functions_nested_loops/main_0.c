#include "main.h" // Include the header file that contains the function prototype

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r, n;

    n = 'H';
    r = _islower(n);
    _putchar(r + '0');

    n = 'o';
    r = _islower(n);
    _putchar(r + '0');

    n = 108;
    r = _islower(n);
    _putchar(r + '0');

    _putchar('\n');
    return (0);
}

