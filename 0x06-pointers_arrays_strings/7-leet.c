#include "main.h"
/**
 * leet - encodes into 1337speak
 * @n: input value 1
 * Return: n value
 */
char *leet(char *n)
{
	int e, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; n[e] != '\0'; e++)
	{
		for (r = 0; r < 10; r++)
		{
			if (n[e] == s1[r])
			{
				n[e] = s2[r];
			}
		}
	}
	return (n);
}
