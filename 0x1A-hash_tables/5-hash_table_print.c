#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int indicator = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (indicator == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			indicator = 0;
			current = current->next;
		}
	}
	printf("}\n");

}
