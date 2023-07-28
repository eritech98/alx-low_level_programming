#include "main.h"

/**
*_strcat - a function that concatenates two strings
*@dest: our input
*@src:input 2
*Return: char
*/

char *_strcat(char *dest, char *src)
{
	int y;

	int t;

	y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	t = 0;
	while (src[t] != '\0')
	{
		dest[y] = src[t];

		y++;
		t++;
	}
	dest[y] = '\0';

	return (dest);
}
