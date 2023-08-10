#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it with zeros.
* @nmemb: The number of elements in the array.
* @size: The size of each element.
*
* Return: A pointer to the allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

/* Set the allocated memory to zero */
for (unsigned int i = 0; i < total_size; i++)
{
*((char *)ptr + i) = 0;
}

return (ptr);
}
