#include "main.h"
/**
 * print_most_numbers - the main function
 * Return: void
 **/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');

}
