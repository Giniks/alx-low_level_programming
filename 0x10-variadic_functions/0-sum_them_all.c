#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the parameters
 * const unsigned int - constant variable
 * @n: the number of parameter passed to the function
 * @...: varaiable number of parameters to calculate
 * the sum of.
 *
 * Retun: if n == 0, return 0
 * otherwise th sum_of_all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
