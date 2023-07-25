#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int p, n, erickPrints;

	erickPrints = 0;

	for (p = 0; str[p] != '\0'; p++)
		erickPrints++;

	n = (erickPrints / 2);

	if ((erickPrints % 2) == 1)
		n = ((erickPrints + 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}

