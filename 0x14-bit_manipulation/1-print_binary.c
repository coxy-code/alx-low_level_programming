#include "main.h"
#include <unistd.h> /* Include for the write function*/

/**
* _putchar - Writes a character to stdout.
* @c: The character to print.
* Return: 1 on success, -1 on error.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be converted and printed.
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1); /* Right-shift n by 1 and call the function recursively */

_putchar((n & 1) + '0'); /* Print the least significant bit */

return;
}

