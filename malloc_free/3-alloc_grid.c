#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: given width as the name is explainatory enough
 * @height:  given height as the name is explainatory enough
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;
	int j;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (b = i; b >= 0; b--)
			{
				free(grid[b]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
