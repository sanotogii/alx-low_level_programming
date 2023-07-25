#include "main.h"

/**
 * set_bit - function
 * Description: set bit
 * @n: ..
 * @index: ..
 * Return: 1 or -1 if fail
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || !n)
		return (-1);
	*n = (*n | (1UL << index));

	return (1);

}
