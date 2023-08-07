#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = (char *)malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    unsigned int i;
    for (i = 0; i < size; i++)
        array[i] = c;

    return array;
}

