#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int e;
	int r;

	for (e = 0; e < 8; e++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[e][r]);
		_putchar('\n');
	}
}
