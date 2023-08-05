#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * @dest: our input A
 * @src: our input B
 * @n: input value n
 *
 * Return: dest
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
