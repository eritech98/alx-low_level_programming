#include "main.h"

/**
*_strncpy - a function that copies a string
* @dest: Parameter 1
* @src: param 2
* @n:param 3
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	e = 0;

	while (e < n && src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
		while (e < n)
		{
			dest[e] = '\0';
			e++;
		}

	return (dest);

}

