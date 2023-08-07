#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: Pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int length1 = 0, length2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of the strings */
while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

/* Allocate memory for the concatenated string (+1 for the null-terminator) */
concatenated = (char *)malloc(sizeof(char) * (length1 + length2 + 1));
if (concatenated == NULL)
return (NULL);

/* Copy the characters from the first string */
for (i = 0; i < length1; i++)
concatenated[i] = s1[i];

/*Concatenate the characters from the second string */
for (j = 0; j < length2; j++)
concatenated[i + j] = s2[j];

/* Add the null-terminator */
concatenated[i + j] = '\0';

return (concatenated);
}

