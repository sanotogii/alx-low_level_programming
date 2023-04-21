#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - aa
 * @separator:a
 * @n: aa
 * @...: a
 * Return: a
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(arg);
	printf("\n");
}
