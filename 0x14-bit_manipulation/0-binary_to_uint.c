#include "main.h"

/**
 * binary_to_uint - aa
 * @b: arg
 *
 * Return: unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr;
	const char *p = b;

	if (!b)
		return (0);
	nbr = 0;

	while (*p)
	{
		if (*p != '0' && *p != '1')
			return (0);
		nbr = (2 * nbr) + (*p - '0');
		p++;
	}
	return (nbr);

}
