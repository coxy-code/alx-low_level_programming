#include <stdlib.h>

/**
* alloc_grid - Allocates memory for a 2-dimensional grid of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: Pointer to the 2-dimensional grid, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the rows */
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* Allocate memory for each column in the rows */
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* If allocation fails, free memory for previously allocated rows */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

/* Initialize all elements of the grid to 0 */
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}

