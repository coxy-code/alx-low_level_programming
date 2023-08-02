#include "main.h"

/**
* is_divisible - Checks if a number is divisible by any number from 2 to(n/2).
* @n: The number to check for divisibility.
* @divisor: The current divisor to check.
* Return: 1 if n is divisible by any number in the range; otherwise, 0.
*/
int is_divisible(int n, int divisor)
{
if (divisor > n / 2)
{
/* If the divisor exceeds n/2, n is not divisible by any number in the range*/
return (0);
}
else if (n % divisor == 0)
{
/* If n is divisible by the current divisor, it is not a prime number. */
return (1);
}
else
{
/* Recursive call with the next divisor. */
return (is_divisible(n, divisor + 1));
}
}

/**
* is_prime_number - Checks if a number is a prime number using recursion.
* @n: The number to check.
* Return: 1 if n is a prime number; otherwise, 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
/* If n is 0, 1, or negative, it is not a prime number. */
return (0);
}
else if (n == 2)
{
/* 2 is a prime number. */
return (1);
}
else
{
/* Start checking for divisibility from 2. */
return (!is_divisible(n, 2));
}
}

