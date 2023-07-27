#include <stdio.h>

/**
 * main - prints the value of a[2]
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5] = {98, 198, 298, 398, 498};
    int *p = a;

    p = p + 2;
    printf("a[2] = %d\n", *p); // The added line of code

    return (0);
}

