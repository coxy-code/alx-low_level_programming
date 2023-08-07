#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_count(char *str)
{
    int i, count = 0, in_word = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (str[i] == ' ')
        {
            in_word = 0;
        }
    }

    return count;
}

char **strtow(char *str)
{
    int i, j, k, len, word_count;
    char **words;

    if (str == NULL || str[0] == '\0')
        return NULL;

    word_count = word_count(str);

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        len = 0;
        while (str[i + len] && str[i + len] != ' ')
            len++;
        words[j] = malloc((len + 1) * sizeof(char));
        if (words[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(words[k]);
            free(words);
            return NULL;
        }
        for (k = 0; k < len; k++)
            words[j][k] = str[i++];
        words[j][k] = '\0';
        j++;
    }

    words[j] = NULL;

    return words;
}

