#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int count_words(char *str)
{
    int count = 0;
    bool in_word = false;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (!in_word)
            {
                in_word = true;
                count++;
            }
        }
        else
        {
            in_word = false;
        }
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_index = 0;
    bool in_word = false;
    int word_start = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (!in_word)
            {
                in_word = true;
                word_start = i;
            }
        }
        else
        {
            if (in_word)
            {
                int word_length = i - word_start;
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL)
                {
                    for (int j = 0; j < word_index; j++)
                        free(words[j]);
                    free(words);
                    return NULL;
                }

                strncpy(words[word_index], str + word_start, word_length);
                words[word_index][word_length] = '\0';
                word_index++;
                in_word = false;
            }
        }
    }

    if (in_word)
    {
        int word_length = i - word_start;
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL)
        {
            for (int j = 0; j <= word_index; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        strncpy(words[word_index], str + word_start, word_length);
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;

    return words;
}

int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    int i;
    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s$\n", tab[i]);
        free(tab[i]);
    }
    free(tab);
    return (0);
}

