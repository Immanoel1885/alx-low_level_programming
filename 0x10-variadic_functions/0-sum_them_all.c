#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: value of numbers to be added
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list init;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(init, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(init, int);

	va_end(init);
	return (sum);
}
