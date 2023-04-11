#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int m;
	int c = 0;

	/* initialize valist for n arguments */
	va_start(v, n);

	/* access all the arguments assigned to valist */
	for (m = 0; m < n; m++)
	{
		c += va_arg(v, int);
	}

	/* clean memory reserved for valist */
	va_end(v);

	return (c);
}
