#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - more headers goes there
*Return: Erick says 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
		printf("Last number of %d will be %d and greater than 5\n", n, p);
	if (p == 0)
		printf("Last number of %d will now be %d and is 0\n", n, p);

	if (p < 6 && p != 0)
		printf("Last number of %d will now be %d and is 0\n", n, p);
	return (0);
}
