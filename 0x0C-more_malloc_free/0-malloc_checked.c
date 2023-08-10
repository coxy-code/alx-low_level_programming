#include <stdio.h>
#include <stdlib.h>

/* Prototype of the malloc_checked function*/
void *malloc_checked(unsigned int b);

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(sizeof(double) * INT_MAX); /* Corrected allocation size*/
    printf("%p\n", (void *)d);
    
    /* Free the allocated memory */
    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}

