#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int e;
	int r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; s[r] != '\0'; e++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[e] == data1[r])
			{
				s[e] = datarot[r];
				break;
			}
		}
	}
	return (s);
}

