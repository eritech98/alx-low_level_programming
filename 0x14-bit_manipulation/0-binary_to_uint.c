#include "main.h"



/**
 * binary_to_uint - FUNCtion that converts int to unsignedt int.
 * @b: character pointing to a string of 0 and 1 character.
 * Return: Unsigned int
 *
 */


unsigned int binary_to_uint(const char *b)
{
	int erick = 0;
	unsigned int olando = 0;

	if (b == 0)
		return (0);

	for (erick = 0; b[erick]; erick++)
		if (b[erick] != 48 && b[erick] != 49)
			return (0);

	for (erick = 0; b[erick]; erick++)
	{
		olando <<= 1;

		if (b[erick] == '1')
			olando += 1;
	}
	return (olando);
}
