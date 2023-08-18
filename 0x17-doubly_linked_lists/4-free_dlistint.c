#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
	head = NULL;
}
