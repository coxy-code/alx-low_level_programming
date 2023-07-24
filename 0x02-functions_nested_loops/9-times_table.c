#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;
            if (j == 0)
                _putchar('0'); // Print the first element without comma and space
            else
            {
                _putchar(','); // Print the comma and space
                if (result < 10)
                    _putchar(' '); // Print an extra space before single-digit numbers
                _putchar('0' + result); // Print the result
            }
        }
        _putchar('\n'); // Move to the next line after each row
    }
}

