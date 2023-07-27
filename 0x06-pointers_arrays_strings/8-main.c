#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "hello, world! capitalize all words.";
    char *result;

    printf("Before: %s\n", str);
    result = cap_string(str);
    printf("After:  %s\n", result);

    return (0);
}

