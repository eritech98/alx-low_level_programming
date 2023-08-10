#include <stdlib.h>
#include "main.h"

/**
*array_range - our FuNc creates an array of integers
*@min: minimum range store
*@max: maximum range store
*Return: pointer
*/


int *array_range(int min, int max)
{
	int *erick;
	int e, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	erick = malloc(sizeof(int) * size);

	if (erick == NULL)
		return (NULL);

	for (e = 0; min <= max; e++)
		erick[e] = min++;

	return (erick);
}
