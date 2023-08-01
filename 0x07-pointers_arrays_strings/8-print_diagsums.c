#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array).
 * @size: Size of the square matrix.
 *
 * Return: Nothing (void).
 */
void print_diagsums(int *a, int size)
{
    int i, sum_diag1 = 0, sum_diag2 = 0;

    /* Calculate the sum of the first diagonal (top-left to bottom-right) */
    for (i = 0; i < size; i++)
    {
        sum_diag1 += a[i * size + i];
    }

    /* Calculate the sum of the second diagonal (top-right to bottom-left) */
    for (i = 0; i < size; i++)
    {
        sum_diag2 += a[i * size + (size - 1 - i)];
    }

    printf("Sum of the first diagonal: %d\n", sum_diag1);
    printf("Sum of the second diagonal: %d\n", sum_diag2);
}

