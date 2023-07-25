#include "main.h"

/**
*rev_string - a function that reverses a string.
*@s:Our string
*Return: void
*
*/

void rev_string(char *s)
{
	char rev = s[0];

	int goinBack = 0;

	int i;

	while (s[goinBack] != '\0')
	goinBack++;

	for (i = 0; i < goinBack; i++)
	{
		goinBack--;
		rev = s[i];
		s[i] = s[goinBack];
		s[goinBack] = rev;
}

}
