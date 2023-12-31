#include "main.h"
#include <stdlib.h>

/**
* word_len - Calculate the length of a word
* @str: Input string
* Return: Length of the word
*/
int word_len(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}

/**
* count_words - Count the number of words in a string
* @str: Input string
* Return: Number of words
*/
int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
{
len++;
}
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}

/**
* strtow - Split a string into words
* @str: Input string
* Return: Array of words
*/
char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = (char **)malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
letters = word_len(str + index);

strings[w] = (char *)malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[index++];
strings[w][l] = '\0';
}
strings[w] = NULL;

return (strings);
}

