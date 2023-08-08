#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - fuNctin printing the minimum number of coins to
 * make change for an amount of money
 * @argc: Argument count
 * @argv: argument vector
 *
 * Return: When succesful (0) otherwise Error!(1)
 */
int main(int argc, char *argv[])
{
	int num, r, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (r = 0; r < 5 && num >= 0; r++)
	{
		while (num >= coins[r])
		{
			result++;
			num -= coins[r];
		}
	}

	printf("%d\n", result);
	return (0);
}
