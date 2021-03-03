#include "holberton.h"
/**
 * **alloc_grid - returns a pointer to a 2D array of ints
 * @width: the width
 * @height: the height
 * Return: NULL if <= 0, pointer otherwise
 */
int **alloc_grid(int width, int height)
{
	int height_cpy, width_cpy = 0;
	int **array_cpy;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array_cpy = malloc(sizeof(array_cpy) * height);
	if (array_cpy == NULL)
	{
		return (NULL);
	}

	for (height_cpy = 0; height_cpy < height; height_cpy++)
	{
		array_cpy[height_cpy] = malloc(sizeof(int) * width);
		if (array_cpy[height_cpy] == NULL)
		{
			for (height_cpy -= 1; height_cpy >= 0; height_cpy--)
				free(array_cpy[height_cpy]);
			free(array_cpy);
			return (NULL);
		}
		for (; width < width; width_cpy++)
		{
			array_cpy[height_cpy][width_cpy] = 0;
		}
	}
	return (array_cpy);
}
