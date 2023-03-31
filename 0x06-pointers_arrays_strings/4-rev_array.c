#include "main.h"

/**
 * reverse_array - revers array function
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 **/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n] = tmp;
		n = n - 1;
	}

}
