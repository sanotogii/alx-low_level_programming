#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - ov
 * @n: number
 * @...: args
 * Return: int
 */



int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);

	return (sum);
}
