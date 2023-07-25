#include "main.h"

/**
*print_array -  a function that prints n elements of an array of integers,
*@a: first
*@n: number of elements of the array to be printed
*
*/


void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)

	{
	printf("%d,", a[t]);
	}

	if (t == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
