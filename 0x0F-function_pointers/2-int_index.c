#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array:This is the arry
 * @size: This is sizE of elements in array
 * @cmp:  pointer to the function to be used to compare v
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int erick;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (erick = 0; erick < size; erick++)
	{
		if (cmp(array[erick]))
			return (erick);
	}
	return (-1);
}
