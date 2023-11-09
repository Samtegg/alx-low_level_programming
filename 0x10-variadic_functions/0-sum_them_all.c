#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The total number of integers to sum.
 * @...: Variable number of integers to be summed.
 *
 * Return: If n is 0, returns 0; otherwise, returns the sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
