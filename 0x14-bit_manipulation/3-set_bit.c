#include "main.h"


/**
 * set_bit - This function sets the value of a bit at agiven index
 * @n: *n is apointer to an integer
 * @index: is the index dtrsting at 0
 * Return: 1 if it worked, or -1 if an error occurs
 */


	int set_bit(unsigned long int *n, unsigned int index)
	{

	unsigned int erick = 64;

	if (n && index <= erick)
	{
		*n = *n | (1 << index);

		return (1);
	}
	else
		return (-1);
}
