#include <stdlib.h>
#include "main.h"


/**
 * _realloc - main
 * @ptr: arg1
 * @old_size: arg2
 * @new_size: arg3
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *t;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);

	if (!p)
		return (NULL);

	t = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = t[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = t[i];
	}

	free(ptr);
	return (p);
}

