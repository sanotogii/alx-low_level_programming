#include "lists.h"

/**
 * free_list - free a list
 * @head: aa
 * Return: void
 */

void free_list(list_t *head)
{

	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
