#include "main.h"

/**
*_strlen - a function that returns the length of a string.
*@s: This is our string called s
*Return: Length 0
*/

int _strlen(char *s)
{
	int ourLength = 0;

	while (*s != '\0')
	{
		ourLength++;
		s++;
	}
	return (ourLength);

}
