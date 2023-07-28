#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: Integer 1
* @n: Integer 2
*Return: void
*/

void reverse_array(int *a, int n)
{
	int e;

	int r;

	for (e = 0; e < n--; e++)
	{
		r = a[e];
		a[e] = a[n];
		a[n] = r;
	}
}

