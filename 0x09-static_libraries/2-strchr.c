#include "main.h"
/**
 * _strchr - Our function
 * @s: First input
 * @c: second input
 * Return: will return a character
 */
char *_strchr(char *s, char c)
{
	int e;

	e = 0;


	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (&s[e]);
	}
	return (0);
}

