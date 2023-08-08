#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int count = 0;
    int is_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            is_word = 0;
        }
        else if (is_word == 0)
        {
            is_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Split a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);

    char **words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_len = 0;
    int word_index = 0;
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            word_len++;
        }
        else if (word_len > 0)
        {
            words[word_index] = malloc((word_len + 1) * sizeof(char));
            if (words[word_index] == NULL)
            {
                /* Free previously allocated memory */
                for (j = 0; j < word_index; j++)
                    free(words[j]);
                free(words);
                return NULL;
            }

            /* Copy the word to the allocated memory */
            for (j = 0; j < word_len; j++)
                words[word_index][j] = str[i - word_len + j];
            words[word_index][word_len] = '\0';

            word_index++;
            word_len = 0;
        }
    }

    /* Handle the last word if exists */
    if (word_len > 0)
    {
        words[word_index] = malloc((word_len + 1) * sizeof(char));
        if (words[word_index] == NULL)
        {
            /* Free previously allocated memory */
            for (j = 0; j <= word_index; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        /* Copy the last word to the allocated memory */
        for (j = 0; j < word_len; j++)
            words[word_index][j] = str[i - word_len + j];
        words[word_index][word_len] = '\0';
    }

    words[num_words] = NULL;

    return words;
}

