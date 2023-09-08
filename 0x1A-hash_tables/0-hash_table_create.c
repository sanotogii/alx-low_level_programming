#include "hash_tables.h"


/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table's array.
 *
 * This function creates a new hash table with an array of the specified size
 * to store key-value pairs. Each element in the array is initialized to NULL
 * Return: A pointer to the newly created hash table.
 * If memory allocation fails,
 * returns NULL.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
