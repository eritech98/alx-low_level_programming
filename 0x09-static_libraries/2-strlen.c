#include "main.h"
/**
 * _strlen - Afunction returning lenth
 * @s: our string
 * Return: An integer which is length
 */
int _strlen(char *s)
{
	int Olando;

	Olando = 0;


	while (*s != '\0')
	{
		Olando++;
		s++;
	}


	return (Olando);
}

