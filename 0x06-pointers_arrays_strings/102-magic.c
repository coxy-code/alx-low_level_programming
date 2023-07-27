#include <stdio.h>

/**
 * main - prints the value of a[2]
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5] = {98, 198, 298, 398, 498};
    int *p;

    p = a + 2; // This line satisfies the given conditions
    printf("a[2] = %d\n", *p);

    return (0);
}

