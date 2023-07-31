#include "main.h"

/**
*_memset - a function that fills memory with a constant byte.
*@s:memory area
*@b: constant byte
*@n: number of bytes to be changed
*Return: will be a character s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	int e = 0;

	for (; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
		return (s);
}

