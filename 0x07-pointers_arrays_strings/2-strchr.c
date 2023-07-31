#include <stdio.h>

char *_strchr(char *s, char c);

int main(void)
{
    char *str = "Hello, World!";
    char ch = 'o';

    char *result = _strchr(str, ch);

    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}

