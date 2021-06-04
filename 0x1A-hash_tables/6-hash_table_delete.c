#include "hash_tables.h"
/**
 * free_link_list - frees linked list
 * @head: beginning
 * Return: None
 */
void free_link_list(hash_node_t *head)
{
	hash_node_t *pop_candidate;
	hash_node_t *change_node;

	pop_candidate = head;
	while (pop_candidate)
	{
		change_node = pop_candidate->next;
		free(pop_candidate->value);
		free(pop_candidate->key);
		free(pop_candidate);
		pop_candidate = change_node;
	}
}

/**
 * hash_table_delete - frees
 * @ht: hash table
 * Return: none
 */
void hash_table_delete(hash_node_t *ht)
{
	size_t idx = 0;

	while (idx < ht->size)
	{
		free_link_list(ht->array[idx]);
		idx++;
	}
	free(ht->array);
	free(ht);
}
