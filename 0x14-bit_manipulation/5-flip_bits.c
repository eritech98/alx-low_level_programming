#include "main.h"

/**
 * flip_bits - This function will returns the number of bits
 * u would need to flip to get from 1 number to anoTher.
 * @n: enters unsigned int_
 * @m: ent unsigned int_
 * Return: NUMBER of bits.
 */

	unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	unsigned int Erick_toflip = 0;
	int apple, bmw;

	while (n > 0 || m > 0)
	{
		apple = (n & 1);
		bmw = (m & 1);

		if (apple != bmw)
			Erick_toflip++;

		n >>= 1;
		m >>= 1;
	}

	return (Erick_toflip);
}
