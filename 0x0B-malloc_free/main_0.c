#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    unsigned int size = 10; /* Adjust the size as needed*/
    char c = 'H'; /* Adjust the character as needed*/

    char *array = create_array(size, c);

    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Print the contents of the array*/
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}

