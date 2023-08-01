#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return (0);
}

char *_custom_memcpy(char *dest, char *src, unsigned int n)
{
    char *original_dest = dest;

    while (n--)
    {
        *dest++ = *src++;
    }

    return original_dest;
}

