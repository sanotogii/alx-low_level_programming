#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - aa
 * @separator: aa
 * @n: aa
 * @...: aa
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	char *s;

	va_start(arg, n);
	i = 0;

	while (i < n)
	{
		s = va_arg(arg, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(arg);

	printf("\n");
}
