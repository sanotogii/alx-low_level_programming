#include "lists.h"
#include <string.h>

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
 * add_node - add node
 * @head: head
 * @str: string
 * Return: aa
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	if (head && str)
	{
		l = malloc(sizeof(list_t));
		if (l == NULL)
			return (NULL);

		l->str = strdup(str);
		l->len = _strlen(str);
		l->next = *head;

		*head = l;
		return (l);	
	}
	return (0);
}
