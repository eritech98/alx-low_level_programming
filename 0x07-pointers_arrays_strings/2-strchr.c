#include "main.h"

/**
*_strchr -  function that locates a character in a string
*@s: string
*@c:character c
*Return: a pointer to the first occurrence of the character c
*
*/


char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
		return (&s[e]);
	}
	return (0);
}
