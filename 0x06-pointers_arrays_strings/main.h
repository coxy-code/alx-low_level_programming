#ifndef MAIN_H
#define MAIN_H

/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: Pointer to the resulting string 'dest'.
*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */

