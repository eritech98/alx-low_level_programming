#include "main.h"



/**
 * flip_bits - This function will return the number of bits
 *
 * @n: unsigned integer 1
 * @m: unsigned integer 2
 * Return: the number of bits(unsigned int dta type)
 */



	unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	unsigned int erick = 0;
	int e, r;

	while (n > 0 || m > 0)
	{
		e = (n & 1);
		r = (m & 1);

		if (e != r)
			erick++;

		n >>= 1;
		m >>= 1;
	}

	return (erick);
}
