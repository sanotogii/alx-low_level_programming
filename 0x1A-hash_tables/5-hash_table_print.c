#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = ht->array[i];

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}
