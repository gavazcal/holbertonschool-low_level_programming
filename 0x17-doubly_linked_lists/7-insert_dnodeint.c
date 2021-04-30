#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the start of the list
 * @idx: list index
 * @n: the content of the node
 * Return: address of new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			new_node->prev = NULL, new_node->next = NULL;
		}
		else
		{
			new_node->prev = NULL, new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (counter + 1 == idx)
		{
			if (current->next == NULL)
			{
				new_node->next = NULL, new_node->prev = current, current->next = new_node;
			}
			else
			{
				new_node->next = current->next, new_node->prev = current;
				current->next = new_node, new_node->next->prev = new_node;
			}
			return (new_node);
		}
		current = current->next, counter++;
	}
	return (new_node);
}
