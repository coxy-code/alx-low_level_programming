#include <stdlib.h>
#include <stdio.h>

int is_delimiter(char c) {
    return c == ' ' || c == '\t';
}

int count_words(char *str) {
    int count = 0;
    int i = 0;

    while (str[i]) {
        while (is_delimiter(str[i]))
            i++;

        if (str[i] == '\0')
            break;

        count++;

        while (str[i] && !is_delimiter(str[i]))
            i++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0')
        return NULL;

    int word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    char **words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int i = 0;
    int word_index = 0;

    while (str[i]) {
        while (is_delimiter(str[i]))
            i++;

        if (str[i] == '\0')
            break;

        int j = i;
        while (str[j] && !is_delimiter(str[j]))
            j++;

        int word_length = j - i;
        words[word_index] = malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            while (word_index > 0) {
                free(words[word_index - 1]);
                word_index--;
            }
            free(words);
            return NULL;
        }

        for (int k = 0; k < word_length; k++)
            words[word_index][k] = str[i++];

        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;

    return words;
}

