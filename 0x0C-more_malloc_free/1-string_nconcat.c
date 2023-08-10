#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - This function concatenates two strings
*@s1: 1st string
*@s2: 2nd string
*@n: number of bytes
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *e;
	unsigned int i = 0, j = 0, length1 = 0, len2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		e = malloc(sizeof(char) * (length1 + n + 1));
	else
		e = malloc(sizeof(char) * (length1 + len2 + 1));

	if (!e)
		return (NULL);

	while (i < length1)
	{
		e[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (length1 + n))
		e[i++] = s2[j++];

	while (n >= len2 && i < (length1 + len2))
		e[i++] = s2[j++];

	e[i] = '\0';

	return (e);
}
