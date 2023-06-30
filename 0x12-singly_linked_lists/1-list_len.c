#include "lists.h"

/**
 * list_len - len of a list
 * @h: aa
 * Return: len
 */

size_t list_len(const list_t *h)
{

	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
