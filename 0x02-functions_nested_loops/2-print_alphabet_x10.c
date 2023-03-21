#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times alphabet
 *
 * Return: void
 **/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
