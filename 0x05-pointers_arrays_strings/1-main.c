#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 98;
int b = 42;

printf("a = %d, b = %d\n", a, b);
swap_int(&a, &b);
printf("a = %d, b = %d\n", a, b);

return (0);
}
