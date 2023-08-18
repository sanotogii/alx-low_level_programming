#include "lists.h"

/**
 * sum_dlistint - returns the sum
 * @head: pointer
 * Return: sum or o
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}

