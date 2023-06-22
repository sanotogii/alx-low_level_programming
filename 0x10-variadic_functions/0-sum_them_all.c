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
	unsigned int i, s;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	s = 0;

	for (i = 0; i < n; i++)
		s = s + va_arg(arg, int);
	va_end(arg);
	return (s);
}
