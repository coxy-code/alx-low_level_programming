#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For size_t */

char *_memcpy(char *dest, char *src, size_t n);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
char *custom_memset(char *s, char b, unsigned int n);
char *_memset(char *s, char b, unsigned int n);

/* Function prototypes */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
void simple_print_buffer(char *buffer, unsigned int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */

