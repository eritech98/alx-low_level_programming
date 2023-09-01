#include "main.h"


/**
 * clear_bit - This function will set a bit to zero at the index.
 * @n: this is our pointer to the integer
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurs
 */

	int clear_bit(unsigned long int *n, unsigned int index)
	{
		unsigned int erick = 64;

	if (n && index <= erick)
	{
		*n = *n & ~(1 << index);

		return (1);
	}
	else

		return (-1);

}
