#include "main.h"

/**
*_strlen_recursion - a function that returns the length of a string
*@s: string
*Return: Always 0
*/

int _strlen_recursion(char *s)
{
	int erick = 0;

	if (*s)
	{
		erick++;
		erick += _strlen_recursion(s + 1);
	}
	return (erick);
}