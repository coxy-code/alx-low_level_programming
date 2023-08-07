#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program.
* @ac: The number of arguments.
* @av: An array of pointers to the arguments.
*
* Return: A pointer to the concatenated string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
int i, j, len, total_len = 0;
char *concatenated_str, *result;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (len = 0; av[i][len]; len++)
total_len++;
}

/* Allocate memory for the concatenated string plus the newlines */
concatenated_str = malloc(total_len + ac + 1);
if (concatenated_str == NULL)
return (NULL);

result = concatenated_str;

/* Copy each argument and add a newline */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
*concatenated_str++ = av[i][j];
*concatenated_str++ = '\n';
}
*concatenated_str = '\0'; /* Add null terminator */

return (result);
}

