#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a struct dog
* @d: Pointer to the struct dog to be freed
*
* Return: None
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

