#include "main.h"

/**
*_puts - afunction to print a sting
*@str: this is our string
*Return: Our return would be void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
