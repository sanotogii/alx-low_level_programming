#include <stdlib.h>
#include "main.h"

/**
 * _memset - main
 * @s: arg1
 * @b: arg2
 * @n: arg3
 * Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - main
 * @nmemb: arg1
 * @size: arg2
 * Return: void
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
