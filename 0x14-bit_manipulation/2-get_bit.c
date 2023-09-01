#include "main.h"





/**
 * get_bit -Will return the value of a bit at a given index.
 * @n: This are the integeres
 * @index: Our index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an erro OCCURS
 */

	int get_bit(unsigned long int n, unsigned int index)
	{
		unsigned int erick = 0;

	for (; erick < index; erick++)
		n >>= 1;

	if (erick > (sizeof(unsigned long int) * 8))
		return (-1);


	return (n & 1);
}
