#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
*@dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, const char *src)
{
char *dest_ptr = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_ptr);
}
