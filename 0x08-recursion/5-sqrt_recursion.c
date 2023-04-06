#include "main.h"

/**
 * power_operation - function
 * @n: arg1
 * @p: arg2
 * Return: sqrt of -1
 */

int power_operation(int n, int p)
{

	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
			return (p);
		else
			return (-1);
	}

	return (0 + power_operation(n, p + 1));

}


/**
 * _sqrt_recursion - square root funtion
 * @n: arg
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
