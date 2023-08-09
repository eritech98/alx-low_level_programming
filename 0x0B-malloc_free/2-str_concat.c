#include "main.h"
#include <stdlib.h>
/**
 *str_concat - This function will concanate 2 strings
 *@s1: our string 1
 *@s2: our string 2
 *Return: will  return NULL or failure
 */
char *str_concat(char *s1, char *s2)
{
	char *erick;
	int e, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = r = 0;
	while (s1[e] != '\0')
		e++;
	while (s2[r] != '\0')
		r++;
	erick = malloc(sizeof(char) * (e + r + 1));

	if (erick == NULL)
		return (NULL);
	e = r = 0;
	while (s1[e] != '\0')
	{
		erick[e] = s1[e];
		e++;
	}

	while (s2[r] != '\0')
	{
		erick[e] = s2[r];
		e++, r++;
	}
	erick[e] = '\0';
	return (erick);
}
