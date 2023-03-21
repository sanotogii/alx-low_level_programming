#include "main.h"
/**
 * print_last_digit - main function
 * @c: the main arg
 * Return: sec
 **/

int print_last_digit(int c)
{
	int k = c % 10;

	if (k < 0)
	{
		k *= -1;
	}

	_putchar(k + '0');

	return (k);


}

