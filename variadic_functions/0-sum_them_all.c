#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - main function to sum
 * @n: value to sum
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
