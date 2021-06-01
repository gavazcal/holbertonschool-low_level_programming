#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated to the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int idx = 0;

	if (key == NULL || value == NULL || ht == NULL || (strcmp(key, "") == 0))
		return (0);

	new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

	new_node->key = (char *)key;
	new_node->value = strdup(value);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		new_node->next = NULL;
	else
	new_node->next = ht->array[idx];

	ht->array[idx] = new_node;

	return (1);
}
