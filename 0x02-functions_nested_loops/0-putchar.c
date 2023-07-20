#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
    char message[] = "_putchar\n";
    int len = sizeof(message) - 1; // Exclude the null terminator

    write(1, message, len); // Write the message to the standard output (file descriptor 1)

    return (SUCCESS);
}
