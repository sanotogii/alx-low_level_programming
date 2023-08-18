#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	tmp = *h;
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
		tmp = tmp->next;
	new->n = n;
	new->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
