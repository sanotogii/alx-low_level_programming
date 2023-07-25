#include "main.h"
/*
 * get_endianness - function
 * Return: void
 */

int get_endianness(void)
{
	unsigned int n = 1;

	return ((n >> 8) ? 1 : 0);
}
