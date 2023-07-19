#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all the numbers of base 16
 *              in lowercase, followed by a new line.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}

