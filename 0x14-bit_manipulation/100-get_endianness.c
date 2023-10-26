#include "main.h"

/**
* get_endianness - checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int value = 1;
char *byte_ptr = (char *)&value;

return (*byte_ptr);
}


