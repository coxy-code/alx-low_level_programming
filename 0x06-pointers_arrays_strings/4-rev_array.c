#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
    int temp, start, end;

    for (start = 0, end = n - 1; start < end; start++, end--)
    {
        // Swap the elements at 'start' and 'end' positions.
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }
}

