#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the quote "and that piece of art is useful" - Dora Korpar, 2015-10-19
 * to the standard error.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* The quote to be printed */

	write(2, quote, 59);
	/* Use the write syscall to print the quote to standard error */

	return (1);
	/* Return 1 to indicate failure, as required */
}
