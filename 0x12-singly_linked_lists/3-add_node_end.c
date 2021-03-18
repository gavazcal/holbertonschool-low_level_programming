#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the start
 * @str: the strings to pass
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node_idx = *head;
	unsigned int idx = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		while (str[idx] != '\0')
		{
			idx++;
		}
		new_node->len = idx;
	}
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node_idx->next != NULL)
		{
			node_idx = node_idx->next;
		}
		node_idx->next = new_node;
	}
	return (new_node);
}
