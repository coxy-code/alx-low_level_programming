#include <stdlib.h>
#include <stdio.h>

int is_delimiter(char c) {
    return c == ' ' || c == '\t';
}

int count_words(char *str) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        while (is_delimiter(str[i]))
            i++;

        if (str[i] == '\0')
            break;

        count++;

        while (str[i] != '\0' && !is_delimiter(str[i]))
            i++;
    }

    return count;
}

char **strtow(char *str) {
    int word_count, i, j, k, word_length;
    char **words;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    for (int word_index = 0; word_index < word_count; word_index++) {
        while (is_delimiter(str[i]))
            i++;

        j = i;
        while (str[j] != '\0' && !is_delimiter(str[j]))
            j++;

        word_length = j - i;
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            while (word_index > 0) {
                free(words[word_index - 1]);
                word_index--;
            }
            free(words);
            return NULL;
        }

        for (k = 0; k < word_length; k++)
            words[word_index][k] = str[i++];

        words[word_index][word_length] = '\0';
    }

    words[word_count] = NULL;

    return words;
}

