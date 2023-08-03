#include "main.h"

/**
* is_prime_number - Checks if a given number is a prime number.
* @n: The number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
/* Base cases */
if (n <= 1) {
return 0; /* Neither prime nor composite*/
}
if (n <= 3) {
return 1; /* 2 and 3 are prime*/
}

/* Check divisibility by numbers from 2 to sqrt(n) */
int i;
for (i = 2; i * i <= n; i++) {
if (n % i == 0) {
return 0; /*The number is divisible, so it's not prime*/
}
}
return 1; /*The number is prime*/
}

