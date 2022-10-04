#include "main.h"
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: row of array
 * @height: column of array
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid;


	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(grid));
	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);


		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);

			free(grid);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}


	return (grid);
}
