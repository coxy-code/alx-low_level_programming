#include <stdio.h>
#include "main.h"

int main(void)
{
    char str[] = "hello";
    char c = 'l';
    char *result = _strchr(str, c);

    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - str);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }

    return (0);
}

