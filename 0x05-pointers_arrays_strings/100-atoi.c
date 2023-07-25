#include "main.h"

/**
 * _atoi - converts a string to an integerlways
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, z, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && z == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (n);
}
