#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 402;
printf("n = %d\n", n);
reset_to_98(&n);
printf("n = %d\n", n);
return (0);
}
