#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - eturns a pointer to a new string which is a duplicate
 * @str: This is our string
 * Return: Must be 0
 */
char *_strdup(char *str)
{
	char *erick;
	int e, r = 0;

	if (str == NULL)
		return (NULL);
	e = 0;
	while (str[e] != '\0')
		e++;

	erick = malloc(sizeof(char) * (e + 1));

	if (erick == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		erick[r] = str[r];

	return (erick);
}
