#include "main.h"

/**
 * print_binary - unsigned to binary
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int byte = 64, flag = 0;

	while (byte--)
	{
		if (n & (1UL << byte))
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
