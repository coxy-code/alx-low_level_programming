#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_char - Print a char argument.
* @separator: The separator to use before the char.
* @c: The char to print.
* @first: Flag to indicate if it's the first argument.
*/
void print_char(char *separator, char c, int *first)
{
if (*first)
*first = 0;
else
printf("%s", separator);

printf("%c", c);
}

/**
* print_int - Print an int argument.
* @separator: The separator to use before the int.
* @num: The int to print.
* @first: Flag to indicate if it's the first argument.
*/
void print_int(char *separator, int num, int *first)
{
if (*first)
*first = 0;
else
printf("%s", separator);
printf("%d", num);
}

/**
* print_float - Print a float argument.
* @separator: The separator to use before the float.
* @f: The float to print.
* @first: Flag to indicate if it's the first argument.
*/
void print_float(char *separator, double f, int *first)
{
if (*first)
*first = 0;
else
printf("%s", separator);

printf("%f", f);
}

/**
* print_string - Print a string argument.
* @separator: The separator to use before the string.
* @str: The string to print.
* @first: Flag to indicate if it's the first argument.
*/
void print_string(char *separator, char *str, int *first)
{
if (*first)
*first = 0;
else
printf("%s", separator);

if (str)
printf("%s", str);
else
printf("(nil)");
}

/**
* print_all - Print arguments based on the format.
* @format: A list of types of arguments passed to the function.
* @...: The arguments to print.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
int first = 1;
char *separator = "";
char current_format;
va_start(args, format);

while (format && format[i])
{
current_format = format[i];

switch (current_format)
{
case 'c':
print_char(separator, va_arg(args, int), &first);
break;
case 'i':
print_int(separator, va_arg(args, int), &first);
break;
case 'f':
print_float(separator, va_arg(args, double), &first);
break;
case 's':
print_string(separator, va_arg(args, char *), &first);
break;
default:
i++;
continue;
}

separator = ", ";
i++;
}

va_end(args);
printf("\n");
}

