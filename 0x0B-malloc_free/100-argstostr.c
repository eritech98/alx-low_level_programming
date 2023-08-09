#include "main.h"
#include <stdlib.h>
/**
 * argstostr - This is our function
 * @ac: integer input
 * @av: This is a double pointer array
 * Return:  a pointer to a new string, or NULL if fail
 */
char *argstostr(int ac, char **av)
{
	int e, t, r = 0, l = 0;
	char *erick;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (t = 0; av[e][t]; t++)
			l++;
	}
	l += ac;

	erick = malloc(sizeof(char) * l + 1);
	if (erick == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
	for (t = 0; av[e][t]; t++)
	{
		erick[r] = av[e][t];
		r++;
	}
	if (erick[r] == '\0')
	{
		erick[r++] = '\n';
	}
	}
	return (erick);
}
