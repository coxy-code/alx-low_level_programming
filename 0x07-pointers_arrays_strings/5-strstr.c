#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    if (t != NULL)
        printf("%s\n", t);
    else
        printf("Substring not found.\n");

    return 0;
}

