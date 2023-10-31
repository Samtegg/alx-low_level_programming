#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for an array of `height` integer pointers. */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		/* Allocate memory for each row (array of integers) with `width` elements. */
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			/* Free previously allocated memory in case of an error. */
			for (; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize all elements of the grid to 0. */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
