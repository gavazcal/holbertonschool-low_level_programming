#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: the start
 * @index: the spot to delete at
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy = *head;
	listint_t *iterator;
	unsigned int idx_check = 0;

	if (!head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	else
	{
		while (copy)
		{
			idx_check++;
			if (idx_check == index - 1)
			{
				iterator = copy->next;
				copy->next = iterator->next;
				free(iterator);
				return (1);
			}
			copy = copy->next;
		}
	}
	return (-1);
}
