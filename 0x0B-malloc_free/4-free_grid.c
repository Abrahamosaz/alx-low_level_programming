#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimension array
 * @grid: a pointer to pointer
 * @heigth: heigth of the array
 *
 * Description: return the required result
 *
 * Return: return void
 */
void free_grid(int **grid, int heigth)
{
	int i;

	for (i = 0; i < heigth; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
