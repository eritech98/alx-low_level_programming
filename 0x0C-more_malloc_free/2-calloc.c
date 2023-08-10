#include <stdlib.h>
#include "main.h"

/**
*_memset - thIs Func memory with a constant byte
*@s: input a
*@b: input c
*@n: number of time to copy
*
*Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}

	return (s);
}

/**
 * *_calloc - functioN calloc allocates memory(arrays)
 * @nmemb: elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *erick;

	if (nmemb == 0 || size == 0)
		return (NULL);

	erick = malloc(size * nmemb);

	if (erick == NULL)
		return (NULL);

	_memset(erick, 0, nmemb * size);

	return (erick);
}
