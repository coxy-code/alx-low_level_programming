#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return 0;
    else
        return 1 + _strlen(s + 1);
}

/**
 * _compare_chars - Helper function to compare characters for palindrome check.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the characters are the same, 0 otherwise.
 */
int _compare_chars(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return _compare_chars(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    return _compare_chars(s, 0, len - 1);
}

