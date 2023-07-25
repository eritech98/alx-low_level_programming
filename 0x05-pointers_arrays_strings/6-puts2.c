#include "main.h"

/**
* puts2 -  function that prints every other character of a string, startin
* @str: This is our string
* Return:void
*
*/


void puts2(char *str)
{
	int erickPrint = 0;

	int p = 0;

	char *t = str;

	int n;

	while (*t != '\0')

	{
	t++;
	erickPrint++;
	}

	p = erickPrint - 1;

	for (n = 0; n <= p; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);

	}
	}

		_putchar('\n');
}
