#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  a function that prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, r, e;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		r = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (e = 0; e < 10; e++)
		{
			if (e < r)
				printf("%02x", *(b + o + e));
			else
				printf("  ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (e = 0; e < r; e++)
		{
			int c = *(b + o + e);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
