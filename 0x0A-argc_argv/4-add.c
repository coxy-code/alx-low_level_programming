#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_positive_number - Check if a string is a positive number
* @str: The string to check
*
* Return: 1 if positive number, 0 otherwise
*/
int is_positive_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}

