#include "main.h"

/**
 * char *_strcpy - THis function opies a string
 * @dest: where is copied to
 * @src: source where copied from
 * Return: will return dta type of value character
 */
char *_strcpy(char *dest, char *src)
{
	int e;

	e = 0;

	int r;

	r = 0;


	while (*(src + e) != '\0')
	{
		e++;
	}
	for ( ; r < e ; r++)
	{
		dest[r] = src[r];
	}
	dest[e] = '\0';
	return (dest);
}
