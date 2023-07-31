#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];                 // Diagonal from top-left to bottom-right
        sum2 += a[i * size + (size - 1 - i)];    // Diagonal from top-right to bottom-left
    }

    printf("%d, %d\n", sum1, sum2);
}

