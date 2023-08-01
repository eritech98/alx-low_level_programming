#include "main.h"

/**
*_strspn - gets the length of a prefix substring.
*@s:string
*@accept: only bytes from accept
*Return: number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s ==  accept[e])
			{
				n++;
				break;
			}
	else if (accept[e + 1] == '\0')

	return (n);

}
	s++;
}
	return (n);
}


