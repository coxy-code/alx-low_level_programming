#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: A pointer to the number whose bit you want to clear.
* @index: The index of the bit to clear, starting from 0 (LSB).
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of bounds */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Use a bitmask with a 1 at the desired index and 0s elsewhere */
unsigned long int mask = 1UL << index;

/* Use bitwise NOT to create a mask with 1s everywhere except the index */
mask = ~mask;

/* Use bitwise AND to clear the bit at the specified index */
*n = *n & mask;

return (1);
}

