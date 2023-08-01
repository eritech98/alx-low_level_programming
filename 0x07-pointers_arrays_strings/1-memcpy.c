#include "main.h"


/**
*_memcpy -  a function that copies memory area.
*@dest: memory aresa where n bytes is copied to
*@src: memory area where n bytes is copied from
*@n: number of bytes
*Return:char
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
