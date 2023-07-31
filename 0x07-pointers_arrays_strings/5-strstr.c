#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr, *needle_ptr;

    while (*haystack != '\0')
    {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*needle_ptr == *haystack_ptr && *needle_ptr != '\0')
        {
            needle_ptr++;
            haystack_ptr++;
        }

        if (*needle_ptr == '\0')
            return haystack;

        haystack++;
    }

    return NULL; // Substring not found
}

