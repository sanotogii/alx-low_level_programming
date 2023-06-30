#include "lists.h"


/**
 * _strlen - count number of string
 * @s: arg
 * Return: len
 **/

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * add_node_end - aa
 * @head: head
 * @str: str
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;

	if (str)
	{
		n = malloc(sizeof(list_t));

		if (n == NULL)
			return (NULL);

		n->str = strdup(str);
		n->len = strlen(str);
		n->next = NULL;

		if (*head == NULL)
		{
			*head = n;
			return (*head);
		}
		else
		{
			t = *head;

			while (t->next != NULL)
				t = t->next;
			t->next = n;
			return (t);
		}
	}
	return (NULL);

}
