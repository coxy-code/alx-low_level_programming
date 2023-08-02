#include "main.h"

/**
* sqrt_check - Checks for the square root of n using recursion.
* @n: The number for which the square root is to be found.
* @i: The current number to check for square root.
* Return: The square root of n. If n have a natural square root, return -1.
*/
int sqrt_check(int n, int i)
{
if (i * i == n)
{
/* If i squared is equal to n, i is the square root of n. */
return (i);
}
else if (i * i > n)
{
/* If i squared exceeds n, n does not have a natural square root. */
return (-1);
}
else
{
/* Recursive call with i incremented to check the next number. */
return (sqrt_check(n, i + 1));
}
}

/**
* _sqrt_recursion - Returns the natural square root a number using recursion.
* @n: The number for which the square root is to be found.
* Return: The square root of n. If n does not natural square root, return -1.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
/* If n is negative, return -1 to indicate an error. */
return (-1);
}
else
{
/* Start checking for square root from 1. */
return (sqrt_check(n, 1));
}
}

