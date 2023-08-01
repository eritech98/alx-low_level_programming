#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers.
 * @a: input
 * @size: input
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int erick, olando, p;

	erick = 0;
	olando = 0;

	for (p = 0; p < size; p++)
	{
		erick = olando + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		olando += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", erick, olando);
}
