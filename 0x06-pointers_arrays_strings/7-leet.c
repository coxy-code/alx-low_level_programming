#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
    char leet_map[] = "aeotlAEOTL";
    char leet_replace[] = "4307143071";
    char *ptr = str;
    int i, j;

    while (*ptr != '\0')
    {
        i = 0;
        j = 0;
        while (leet_map[i] != '\0')
        {
            if (*ptr == leet_map[i])
            {
                *ptr = leet_replace[j];
                break;
            }
            i++;
            j++;
        }
        ptr++;
    }

    return str;
}

