#include <stdlib.h>

/**
* array_range - Creates an array of integers.
* @min: The minimum value.
* @max: The maximum value.
*
* Return: A pointer to the created array, or NULL on failure or invalid input.
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}

