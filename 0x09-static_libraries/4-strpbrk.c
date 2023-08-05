#include "main.h"
/**
 * _strpbrk - our function
 * @s: STRING
 * @accept: Input Value 2
 * Return: will return a dta type of character
 */
char *_strpbrk(char *s, char *accept)
{
	int kr;


	while (*s)
	{
		for (kr = 0; accept[kr]; kr++)
		{
		if (*s == accept[kr])
		return (s);
		}
	s++;
	}


return ('\0');
}

