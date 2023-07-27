#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */
bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
            return true;
    }
    return false;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    bool capitalize_next = true;
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
        {
            *ptr = *ptr - 'a' + 'A';
        }

        capitalize_next = is_separator(*ptr);
        ptr++;
    }

    return str;
}

