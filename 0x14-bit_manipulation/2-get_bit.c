#include "main.h"



/**
 * get_bit - IS A Function which returns the val of a bit at given index.
 * @n: integer
 * @index: is the index, starts from 0 of the bit you want to acquire
 * Return: value of bit at index index or -1 if an error occurs.
 */

	int get_bit(unsigned long int n, unsigned int index)
	{
	unsigned int Olando = 0;

	for (; Olando < index; Olando++)
		n >>= 1;

	if (Olando > (sizeof(unsigned long int) * 8))
		return (-1);
	return (n & 1);
	}
