#include "dog.h"

/**
* init_dog - Initializes a struct dog with provided values
* @d: Pointer to the struct dog to be initialized
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

