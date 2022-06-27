#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: rows of the array
 * @heigth: column of the array
 *
 * Description: return the required result
 *
 * Return: return char pointer to pointer
 */
int **alloc_grid(int width, int heigth)
{
	int i, j, k;
	int **ptr = NULL;

	if (width <= 0 || heigth <= 0)
		return (NULL);
	ptr = (int **)malloc(heigth * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < heigth; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (j = 0; j < heigth; j++)
	{
		for (k = 0; k < width; k++)
		{
			ptr[j][k] = 0;
		}
	}
	return (ptr);
}
