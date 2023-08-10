#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    // Clear the allocated memory
    char *byte_ptr = (char *)ptr;
    unsigned int total_size = nmemb * size;
    for (unsigned int i = 0; i < total_size; i++)
        byte_ptr[i] = 0;

    return (ptr);
}

