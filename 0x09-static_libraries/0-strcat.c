#include "main.h"

/**
*_strcat - This function concatenates 2 strings
* @dest: to
* @src: source
*
* Return: a character
*/

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int r;

	while (dest[e] != '\0')
	{
		e++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[e] = src[r];
		e++;
		r++;
	}


	dest[e] = '\0';
	return (dest);
}
