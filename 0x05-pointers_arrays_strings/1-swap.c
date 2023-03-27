#include "main.h"

/**
 * swap_int - swap function
 * @a: arg1
 * @b: arg2
 * Return: void
 **/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
