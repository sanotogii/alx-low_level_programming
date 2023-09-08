#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: The hash table.
 * @key: The key (non-empty).
 * @value: The value (can be empty).
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index = key_index((unsigned const char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
