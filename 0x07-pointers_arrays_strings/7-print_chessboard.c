#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints a chessboard of 8x8 grid.
* @a: The 2D array representing the chessboard.
*
* Return: Nothing (void).
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}

