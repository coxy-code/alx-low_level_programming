#include <stdlib.h>

/**
* free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
* @grid: The address of the 2-dimensional grid.
* @height: The height of the grid.
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

/* Free memory for each row and then for the entire grid */
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
free(grid[i]);
}
free(grid);
}

