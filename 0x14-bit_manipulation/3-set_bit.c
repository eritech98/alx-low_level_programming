#include "main.h"

/**
 * set_bit - A function that will sets value of a bit to 1 at given index.
 * @n: pTRS to an integer
 * @index:This is the index, starting from 0 of the bit you'll want to set.
 * Return: 1 if it worked, or -1 incase of an Error
 */



	int set_bit(unsigned long int *n, unsigned int index)
	{
	unsigned int This_limit = 64;

	if (n && index <= This_limit)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
	return (-1);
}
