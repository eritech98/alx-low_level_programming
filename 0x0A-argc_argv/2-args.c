#include <stdio.h>
#include "main.h"



/**
 * main - Function which prints all arguments passed to it
 * @argc: argument count (Number of arguments)
 * @argv: argument vectors
 *
 * Return: Must be 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}

	return (0);
}
