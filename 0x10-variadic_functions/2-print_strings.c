#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints STRINGS FOLLOWED BY\n
 * @separator: The STRING to be PRINTED
 * @n: The NUMBER of STRINGS passed
 * @...: An all variables to be printed
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringserick;

	char *stringpointer;
	unsigned int opiyo;

	va_start(stringserick, n);

	for (opiyo = 0; opiyo < n; opiyo++)
	{
		stringpointer = va_arg(stringserick, char *);

		if (stringpointer == NULL)
			printf("(nil)");
		else
			printf("%s", stringpointer);

		if (opiyo != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringserick);
}
