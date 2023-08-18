#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - struct to match format specifiers to print functions
 * @format: The format specifier
 * @func: The corresponding print function
 */
typedef struct format
{
	char format;
	void (*func)(va_list args);
} format_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

