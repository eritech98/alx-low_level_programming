#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int erick;

	erick = n;

	if (n < 0)
	{
		_putchar('-');
		erick = -n;
	}

	if (erick / 10 != 0)
	{
		print_number(erick / 10);
	}
	_putchar((erick % 10) + '0');
}
