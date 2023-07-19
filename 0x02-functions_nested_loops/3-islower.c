#include "main.h"


/**
 * _islower - Checks if a character is lowercase
 *
 * Description: This function checks if the given character is lowercase.
 *It returns 1 if the character is lowercase, and 0 otherwise.
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */

	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

