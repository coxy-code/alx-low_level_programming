#ifndef DOG_H
#define DOG_H

/**
* struct dog - A struct representing a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Description: This struct stores information about a dog.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

