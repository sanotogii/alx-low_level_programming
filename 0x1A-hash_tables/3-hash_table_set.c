#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index = key_index((unsigned const char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
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
