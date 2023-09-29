#include "main.h"

/**
 * clear_bit -A function that sets the value of a bit to 0 at any given index.
 * @n: pointER to int
 * @index:The Index starting from 0 of the bit you will  want to set.
 * Return: 1 if it worked, or -1 incase an Error occurred.
 */

	int clear_bit(unsigned long int *n, unsigned int index)
	{
	unsigned int This_limit = 64;

	if (n && index <= This_limit)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	else
	return (-1);
}
