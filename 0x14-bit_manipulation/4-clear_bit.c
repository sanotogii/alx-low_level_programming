#include "main.h"
/**
 * clear_bit - clear bit function
 * Description: clear bit
 * @n: ..
 * @index: ..
 * Return: 1 or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || !n)
		return (-1);
	*n &= ~(1UL << index);

	return (-1);
}
