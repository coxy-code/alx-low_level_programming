#include <stdlib.h>
#include "dog.h"

/**
* _strlen - Calculates the length of a string
* @s: The string to be measured
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
* _strcpy - Copies a string from source to destination
* @dest: The destination buffer
* @src: The source string
*
* Return: The pointer to the destination buffer
*/
char *_strcpy(char *dest, char *src)
{
int i, len;
len = _strlen(src);

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* new_dog - Creates a new dog with given attributes
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: Pointer to the newly created dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}

_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

