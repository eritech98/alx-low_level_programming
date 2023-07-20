#include "main.h"

/**
*print_diagonal - a function that draws a diagonal line on the terminal
*@n: Input variable
*Description - If n is 0 or less, the function should only print a \n
*
*Return: void
*/

	void print_diagonal(int n)

		{
			int i, j;

			if (n <= 0)

			_putchar('\n');

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
				_putchar(' ');
				}

				_putchar('\\');
				_putchar('\n');
			}

}
