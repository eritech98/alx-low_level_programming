#include "main.h"

/**
* _strncat - a function that concatenates two strings
* @dest: Input 1
*@src:Parameter 2
* @n:Parameter 3
*Return: char
*/


char *_strncat(char *dest, char *src, int n)
{
	int e;

	int r;

	e = 0;

	while (dest[e] != '\0')
	{
		e++;
	}

	r = 0;

	while (r < n && src[r] != '\0')
	{
	dest[e] = src[r];
		e++;
		r++;
	}

	dest[e] = '\0';

	return (dest);

}
