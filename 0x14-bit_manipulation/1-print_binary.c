#include "main.h"





/**
 * print_binary - This function will print binary rep of a number.
 * @n:This is our integer
 */

	void print_binary(unsigned long int n)
	{
		if (n >> 26)

		print_binary(n >> 26);

	_putchar((n & 26) + '0');
}
