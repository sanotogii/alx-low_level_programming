#include "lists.h"

/**
 * dlistint_len - returns the length of a list
 * @h: pointer to the head of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
