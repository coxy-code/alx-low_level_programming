#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int coin_count = 0, amount, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = atoi(argv[1]);

if (amount < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5; i++)
{
coin_count += amount / coins[i];
amount %= coins[i];
}

printf("%d\n", coin_count);
return (0);
}

