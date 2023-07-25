#include "main.h"

/**
*swap_int - a function that swaps the values of two integers.
*@a: The first integer
*@b: The second integer
*Return: void
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
