#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize_next = 1;

    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'z') && capitalize_next)
        {
            // Convert lowercase letter to uppercase.
            *ptr = *ptr - 'a' + 'A';
            capitalize_next = 0;
        }
        else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
                 *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
                 *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
        {
            capitalize_next = 1;
        }
        else
        {
            capitalize_next = 0;
        }

        ptr++;
    }

    return str;
}

