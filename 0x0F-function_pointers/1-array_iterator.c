#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Afunction which executEs a fnc
 * @array: This is our  arry
 * @size:this is the size to execute
 * @action: pointer to array_iterator
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array == NULL || action == NULL)
		return;

	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}
