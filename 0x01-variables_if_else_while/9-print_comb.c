#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible combinations of
 *              single-digit numbers in ascending order, separated by ", ".
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

