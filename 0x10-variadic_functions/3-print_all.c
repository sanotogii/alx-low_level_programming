#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - aa
 * @format: aa
 * @...: aa
 * Return: aa
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'r':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 's':
				s = va_arg(args, char*);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(args);
}
