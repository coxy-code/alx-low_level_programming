#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a binary string
*
* Return: the converted number, or 0 if there is an invalid character
* or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i])
{
if (b[i] == '0')
{
result <<= 1; /* Shift result to the left */
}
else if (b[i] == '1')
{
result <<= 1; /* Shift result to the left */
result |= 1;  /* Set the least significant bit to 1 */
}
else
{
return (0); /* Invalid character encountered */
}
i++;
}
return (result);
}

