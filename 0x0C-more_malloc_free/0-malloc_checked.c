#include "main.h"

/**
 * malloc_checked - main function
 * @b: arg
 * Return: ptr
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
