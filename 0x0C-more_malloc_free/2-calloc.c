#include <stdlib.h>
#include "main.h"
/**
 * _calloc - main
 * @nmemb: arg1
 * @size: arg2
 * Return: void
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);
	unsigned int i;
	char *cptr;

	if (ptr == NULL)
		return (NULL);

	cptr = ptr;

	for (i = 0; i < nmemb * size; i++)
		cptr[i] = 0;

	return (ptr);
}
