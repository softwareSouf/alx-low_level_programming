#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **per;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	per = malloc(sizeof(int *) * height);
	if (per == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
	per[x] = malloc(sizeof(int) * width);
		if (per[x] == NULL)
		{
		for (y = 0; y < x; y++)
		{
			free(per[y]);
		}
		free(per);
		return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			per[x][y] = 0;
		}
	}

	return (per);
}
