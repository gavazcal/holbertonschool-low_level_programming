#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the start
 * @n: the node to write
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node_idx = *head;
	unsigned int idx = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node_idx->next)
		{
			node_idx = node_idx->next;
			idx++;
		}
		node_idx->next = new_node;
	}
	return (new_node);
}
