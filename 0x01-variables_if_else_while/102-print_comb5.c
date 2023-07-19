#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible combinations of two two-digit
 *              numbers in ascending order, separated by a comma and a space.
 *              Numbers range from 0 to 99 and are printed with two digits.
 *              The combinations with numbers like 00 01 and 01 00 are considered
 *              the same combination of the numbers 0 and 1.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

