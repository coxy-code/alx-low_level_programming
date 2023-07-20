#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (file descriptor 1)
 * @c: The character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
