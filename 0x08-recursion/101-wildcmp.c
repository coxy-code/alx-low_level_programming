#include "main.h"

/**
* wildcmp - Compares two strings and checks for wildcard matching.
* @s1: The first string.
* @s2: The second string (may contain wildcards '*').
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));
else if (*s1 == *(s2 + 1))
return (wildcmp(s1 + 1, s2 + 2) || wildcmp(s1 + 1, s2));
else
return (wildcmp(s1 + 1, s2));
}
if (*s1 == *s2)
{
if (*s1 == '\0')
return (1);
return (wildcmp(s1 + 1, s2 + 1));
}

return (0);
}

