#include "main.h"
/**
 * _strpbrk -  function that searches a string...
 * @s: input
 * @accept: input
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
		if (*s == accept[e])
		return (s);
		}
	s++;
	}
	return ('\0');
}
