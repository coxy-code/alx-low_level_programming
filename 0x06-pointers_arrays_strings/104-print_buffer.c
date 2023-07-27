#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print from the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i); // Print the starting address of the line

        // Print hexadecimal content (2 chars) of the buffer, 2 bytes at a time
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", (unsigned char)b[i + j]);
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" ");
        }

        printf(" ");

        // Print the content of the buffer
        for (j = 0; j < 10; j++)
        {
            if (i + j >= size)
                break;

            if (b[i + j] >= 32 && b[i + j] <= 126) // Check for printable characters
                printf("%c", b[i + j]);
            else
                printf(".");
        }

        printf("\n");
    }
}

