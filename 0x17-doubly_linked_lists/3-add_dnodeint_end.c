#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end the list
 * @head: pointer
 * @n: ..
 * Return: address of the new element or NULL
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	temp = new;

	return (new);
}
