#include <stdio.h>


/**
 * flip_bits - aa
 * @n: aa
 * @m: aa
 * Return: aa
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = n ^ m;
	unsigned int c = 0;

	while (p)
	{
		p &= p - 1;
		c++;
	}
	return (c);

}
