#include "main.h"

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The number containing the bit.
* @index: The index of the bit to retrieve.
*
* Return: The value of the bit at the index or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)  /* Check if index is out of bounds */
return (-1);

return ((n >> index) & 1);
}

