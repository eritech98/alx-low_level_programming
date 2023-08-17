#include "variadic_functions.h"
#include <stdarg.h>




/**
 * sum_them_all - will return sum of (all) param
 * @n: Number of Params
 * @...: infinite numbers of vars
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int e;
	unsigned int sum = 0;

	va_start(ap, n);

	for (e = 0; e < n; e++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
