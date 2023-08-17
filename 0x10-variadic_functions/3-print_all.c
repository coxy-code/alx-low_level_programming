#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Print arguments based on the format.
* @format: A list of types of arguments passed to the function.
* @...: The arguments to print.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char current_format;
char *str;
int num;
double f;

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

switch (current_format)
{
case 'c':
putchar(separator[0]);
putchar(va_arg(args, int));
break;
case 'i':
num = va_arg(args, int);
printf("%s%d", separator, num);
break;
case 'f':
f = va_arg(args, double);
printf("%s%f", separator, f);
break;
case 's':
separator = (str = va_arg(args, char *)) ? "" : "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}

separator = ", ";
i++;
}

va_end(args);

putchar('\n');
}

