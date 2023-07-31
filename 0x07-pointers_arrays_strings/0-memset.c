#include <stdio.h>
#include <stddef.h> // For size_t

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to fill with the constant byte.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, size_t n)
{
    for (size_t i = 0; i < n; i++)
        s[i] = b;

    return s;
}

/**
 * simple_print_buffer - Prints buffer in hexadecimal format.
 * @buffer: The address of memory to print.
 * @size: The size of the memory to print.
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - Test the _memset function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    printf("Original buffer:\n");
    simple_print_buffer(buffer, 98);

    _memset(buffer, 0x01, 95);

    printf("Buffer after _memset:\n");
    simple_print_buffer(buffer, 98);

    return 0;
}

