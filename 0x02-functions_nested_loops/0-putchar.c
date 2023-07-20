#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line.
 * Return: Always 0
 */
int main(void)
{
    char message[] = "_putchar\n";
    int i;

    for (i = 0; message[i] != '\0'; i++)
    {
        _putchar(message[i]);
    }

    return (0);
}
