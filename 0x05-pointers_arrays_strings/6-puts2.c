#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	t = len - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

