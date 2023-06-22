#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - aa
 * @format: aa
 * @...: aa
 * Return: aa
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *SP = "";
	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", SP, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", SP, va_arg(arg, double));
					break;
				case 'i':
					i = va_arg(arg, int);
					printf("%s%d", SP, i);
					break;
				case 's':
					s = va_arg(arg, char*);

					if (!s)
						s = "(nil)";
					printf("%s%s", SP, s);
					break;
				default:
					i++;
					continue;
			}
			SP = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
