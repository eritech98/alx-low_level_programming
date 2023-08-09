#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this function nested loop to make grid
 * @width: input width
 * @height: height input2
 * Return: will return a pointer to 2 dim. arra
 */
int **alloc_grid(int width, int height)
{
	int **erick;
	int e, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	erick = malloc(sizeof(int *) * height);

	if (erick == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		erick[e] = malloc(sizeof(int) * width);

		if (erick[e] == NULL)
		{
			for (; e >= 0; e--)
				free(erick[e]);

			free(erick);
			return (NULL);
		}
	}

	for (e = 0; e < height; e++)
	{
		for (r = 0; r < width; r++)
			erick[e][r] = 0;
	}

	return (erick);
}
