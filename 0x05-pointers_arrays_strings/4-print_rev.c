#include "main.h"

/**
*print_rev -  a function that prints a string, in reverse...new line
*@s:This is our string
*
*Return: void
*/

void print_rev(char *s)
{
	int ourLength = 0;

	int t;

	while (*s != '\0')
	{
		ourLength++;
		s++;
	}

	s--;
	for (t = ourLength; t > 0; t--)


	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
