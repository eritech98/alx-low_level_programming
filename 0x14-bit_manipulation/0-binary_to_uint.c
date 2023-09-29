#include "main.h"


/**
 * binary_to_uint - A function that converts a binary number
 * @b: character pointing to a string of 0 and 1
 * Return: the converted number, or 0 if there is one or more character
 * In the string b that is not 0 or 1
 */

	unsigned int binary_to_uint(const char *b)
	{
		int r = 0;
		unsigned int erick25 = 0;

		if (b == 0)
		return (0);

		for (r = 0; b[r]; r++)
		if (b[r] != 48 && b[r] != 49)
			return (0);

		for (r = 0; b[r]; r++)
		{
		erick25 <<= 1;

		if (b[r] == '1')
			erick25 += 1;
	}
	return (erick25);
}
