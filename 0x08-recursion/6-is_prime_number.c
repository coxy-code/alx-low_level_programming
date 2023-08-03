#include "main.h"

/**
* is_prime_helper - Helper function to check if a number is prime.
* @n: The number to check for primality.
* @divisor: The current divisor to test.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_helper(int n, int divisor)
{
if (n < 2) /* 0 and 1 are not prime numbers */
return (0);

if (divisor * divisor > n) /* All divisors checked, it's a prime number */
return (1);

if (n % divisor == 0) /* n is divisible by divisor, not a prime number */
return (0);

return (is_prime_helper(n, divisor + 1)); /* Check next divisor */
}

/**
* is_prime_number - Checks if a number is prime.
* @n: The input number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2)); /* Start checking from 2 (the first prime number) */
}

