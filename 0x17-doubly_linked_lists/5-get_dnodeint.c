#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer
 * @index: index
 * Return: pointer to the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && c < index)
	{
		c++;
		head = head->next;
	}
	return (head);


}
