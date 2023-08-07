#include <stdlib.h>
#include <stdio.h>

/**
* word_count - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/
int word_count(char *str)
{
int count = 0;
int is_word = 0; /* To track if we are inside a word */
for (int i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (!is_word)
{
is_word = 1;
count++;
}
}
else
{
is_word = 0;
}
}
return count;
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return NULL;

int word_count = word_count(str);
if (word_count == 0)
return NULL;

char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return NULL;

int i = 0;
int word_length = 0;
int word_start = 0;
int is_word = 0;

for (; str[i]; i++)
{
if (str[i] != ' ')
{
if (!is_word)
{
word_start = i;
is_word = 1;
}
word_length++;
}
else
{
if (is_word)
{
words[word_count - 1] = malloc((word_length + 1) * sizeof(char));
if (words[word_count - 1] == NULL)
{
for (int j = 0; j < word_count - 1; j++)
free(words[j]);
free(words);
return NULL;
}

for (int j = 0; j < word_length; j++)
words[word_count - 1][j] = str[word_start + j];
words[word_count - 1][word_length] = '\0';

word_count--;
word_length = 0;
is_word = 0;
}
}
}

return words;
}

