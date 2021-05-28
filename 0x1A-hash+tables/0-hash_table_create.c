#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to new table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int idx = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
	{
		new_table->array[idx] = NULL;
	}
	new_table->size = size;

	return (new_table);

}
