#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the string "Programming is like building a multilingual puzzle"
 *              using the puts function and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "\"Programming is like building a multilingual puzzle\n", 51);
	return (0);
}
