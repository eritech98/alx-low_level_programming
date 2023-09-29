#include "main.h"

/**
* print_binary - This is the function that prints the binary repres of a Number.
* @n: int
*/

	void print_binary(unsigned long int n)
	{
		if (n >> 1)
		print_binary(n >> 1);

		_putchar((n & 1) + '0');
}
