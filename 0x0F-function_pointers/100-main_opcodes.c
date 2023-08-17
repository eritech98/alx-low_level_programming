#include <stdio.h>
#include <stdlib.h>

/**
 * main - main ffunction
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, e;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (e = 0; e < bytes; e++)
	{
		if (e == bytes - 1)
		{
			printf("%02hhx\n", arr[e]);
			break;
		}
		printf("%02hhx ", arr[e]);
	}
	return (0);
}
