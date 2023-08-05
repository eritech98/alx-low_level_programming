#include "main.h"
/**
 * _strncpy - A function copying a string
 * @dest: This is our first input
 * @src: This is where the string is copied from
 * @n: our number n which is bytes
 *
 * Return: data type of character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}


	return (dest);
}
