#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the start of the list
 * @idx: index
 * @n: data
 * Return: address of new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert = malloc(sizeof(listint_t));
	listint_t *copy = *head;
	unsigned int idx_check  = 0;

	if (insert == NULL)
	{
		return (NULL);
	}
	insert->n = n;
	insert->next = NULL;
	if (*head == NULL && idx > 0)
	{
		free(insert);
		return (NULL);
	}
	if (idx_check == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}
	while (idx_check < idx - 1)
	{
		idx_check++;
		if (copy == NULL && idx - idx_check > 0)
		{
			free(insert);
			return (NULL);
		}
		copy =  copy->next;
	}
	insert->next = copy->next;
	copy->next = insert;

	return (insert);
}
