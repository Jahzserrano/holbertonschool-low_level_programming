#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **twod;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		twod[h_index] = malloc(sizeof(int) * width);
		if (twod[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(twod[h_index]);

			free(twod);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			twod[h_index][w_index] = 0;
	}
	return (twod);
}
