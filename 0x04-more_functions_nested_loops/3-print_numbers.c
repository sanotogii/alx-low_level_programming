#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 **/

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
