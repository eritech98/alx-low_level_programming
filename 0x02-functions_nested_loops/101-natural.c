#include <stdio.h>

/**
 * main - Prints the sum of natural numbers
 *
 * Description: This program calculates and prints the sum of natural numbers
 *
 * Return: Always 0.
 */
	{
		int i, sum = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}


		printf("%d\n", sum);


		return (0);
}
