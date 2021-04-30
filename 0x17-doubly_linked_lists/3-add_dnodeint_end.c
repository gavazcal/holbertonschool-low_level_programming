#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the start of the list
 * @n: the content of the node
 *
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (current != NULL)
	{
		while ((current->next) != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;
	if (current == NULL)
	{
		*head = new_node;
	}
	return (new_node);
}
