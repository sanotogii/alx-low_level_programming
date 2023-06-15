#include "main.h"

/**
 * _memset - main
 * @s: arg1
 * @b: arg2
 * @n: arg3
 * Return: char
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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = (char *)malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);

}
