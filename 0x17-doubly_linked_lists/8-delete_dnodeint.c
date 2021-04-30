#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at an index of a dlistint_t list
 * @head: start of the list
 * @index: spot to delete at
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = (*head);

	while (current)
	{
		if (counter == index)
			break;
		current = current->next;
		if (current != NULL)
			counter++;
	}
	if (current != NULL)
	{
		if (current->next)
		{
			current->next->prev = current->prev;
		}
		if (current->prev)
		{
			current->prev->next = current->next;
		}
		else
			*head = current->next;
		free(current);
		return (1);
	}
	return (-1);
}

