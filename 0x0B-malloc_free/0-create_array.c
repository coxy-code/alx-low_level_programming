#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = (char *)malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    unsigned int i; // Move the declaration here
    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}

