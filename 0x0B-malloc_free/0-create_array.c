#include "main.h"
#include <stdlib.h>
/**
 *create_array - function array of size size and assign char c
 *@size: size of the array
 *@c: character
 *Description: creating array of size size and assign char c
 *Return: will return pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *erick;
	unsigned int e;

	erick = malloc(sizeof(char) * size);
	if (size == 0 || erick == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		erick[e] = c;
	return (erick);
}
