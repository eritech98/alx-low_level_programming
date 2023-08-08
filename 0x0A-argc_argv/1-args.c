#include "main.h"
#include <stdio.h>

/**
 * main - The compiler starts compiling at this point
 * @argc: This is the argument count
 * @argv: This is the arigument vectors
 *
 * Return: must be zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
