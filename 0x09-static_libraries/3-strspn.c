#include "main.h"
/**
 * _strspn - Function
 * @s: our string
 * @accept: inPut value
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int er = 0;

	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				er++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (er);
		}
		s++;
	}
	return (er);
}

