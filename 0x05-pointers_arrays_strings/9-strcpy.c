#include "main.h"

/**
*char *_strcpy -  function that copies the string pointed to by src...
*@dest: copy to
*@src: copy from
*Return:dest
*/

char *_strcpy(char *dest, char *src)
{
	int p = 0;

	int y = 0;

	while (*(src + 1) != '\0')
	{
	p++;
	}

	for ( ;y < 1; y++)

	{
	dest[y] = src[y];
	}

	dest[p] = '\0';
	return (dest);
}

