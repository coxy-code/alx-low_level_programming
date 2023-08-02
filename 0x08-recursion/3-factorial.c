#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @n: The number for which the factorial is to be calculated.
* Return: The factorial of n. If n is lower than 0, return -1 (error).
*/
int factorial(int n)
{
if (n < 0)
{
/* If n is lower than 0, return -1 to indicate an error. */
return (-1);
}
else if (n == 0)
{
/* Factorial of 0 is 1. */
return (1);
}
else
{
/* Recursive call with n-1, multiplied by n (current number). */
return (n * factorial(n - 1));
}
}

