#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int i, length = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the input string*/
    while (str[length] != '\0')
        length++;

    /* Allocate memory for the duplicate string*/
    duplicate = (char *)malloc(sizeof(char) * (length + 1));
    if (duplicate == NULL)
        return (NULL);

    /* Copy the characters from the input string to the duplicate*/
    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return (duplicate);
}

