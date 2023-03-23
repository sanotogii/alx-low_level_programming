#include "main.h"

/**
 * print_line - main function
 * @n: arg
 * Return: void
 **/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
