#include "main.h"
/**
 *_memcpy - a function that ...
 *@dest: copied to
 *@src: copied from
 *@n: n bytes
 *
 *Return: A charater
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int e = 0;
	int r = n;


	for (; e < r; e++)
	{
		dest[e] = src[e];
		n--;
	}
	return (dest);
}
