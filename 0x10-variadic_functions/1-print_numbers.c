#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by \n
 * @separator: The string to be PRrinted between numbers.
 * @n: The number of integers passed
 * @...: infinite number of vars passed
 */

/*This id the prototype*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list erick;
	unsigned int opiyo;

	va_start(erick, n);

	for (opiyo = 0; opiyo < n; opiyo++)
	{
		printf("%d", va_arg(erick, int));

		if (opiyo != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(erick);
}
