#include "variadic_functions.h"
#include <stdio.h>

/**
* print_char - Prints a character
* @args: A va_list containing the character to print
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* print_int - Prints an integer
* @args: A va_list containing the integer to print
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_float - Prints a float
* @args: A va_list containing the float to print
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* print_string - Prints a string
* @args: A va_list containing the string to print
*/
void print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
int j = 0;
char *separator = "";

format_t formats[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_start(args, format);
while (format && format[i])
{
while (formats[j].format)
{
if (formats[j].format == format[i])
{
printf("%s", separator);
formats[j].func(args);
separator = ", ";
break;
}
j++;
}
j = 0;
i++;
}
printf("\n");
va_end(args);
}

