#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to power of y using recursion.
* @x: The base number.
* @y: The exponent.
* Return: The value x to the power of y. If y is lower than 0, -1 (error)
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
/* If y is lower than 0, return -1 to indicate an error. */
return (-1);
}
else if (y == 0)
{
/* Any number raised to the power of 0 is 1. */
return (1);
}
else
{
/* Recursive call to calculate x raised to the power of y-1,*/
/* and multiply the result by x (current number). */
return (x * _pow_recursion(x, y - 1));
}
}

