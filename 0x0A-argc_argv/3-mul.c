#include <stdio.h>
#include "main.h"

/**
 * _atoi - This function converts string to an integer
 * @s: string
 *
 * Return: value of int
 */
int _atoi(char *s)
{
	int e, r, i, c, k, erick;

	e = 0;
	r = 0;
	i = 0;
	c = 0;
	k = 0;
	erick = 0;

	while (s[c] != '\0')
		c++;

	while (e < c && k == 0)
	{
		if (s[e] == '-')
			++r;

		if (s[e] >= '0' && s[e] <= '9')
		{
			digit = s[e] - '0';
			if (r % 2)
				erick = -erick;
			i = i * 10 + erick;
			k = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			k = 0;
		}
		e++;
	}

	if (k == 0)
		return (0);

	return (i);
}

/**
 * main - multiplies two numbers
 * @argc: argument count(Number of arguments)
 * @argv: Argument vector
 *
 * Return: when 0 (Success), when 1(Error)
 */
int main(int argc, char *argv[])
{
	int result, n, p;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n = _atoi(argv[1]);
	p = _atoi(argv[2]);
	result = n * p;

	printf("%d\n", result);

	return (0);
}
