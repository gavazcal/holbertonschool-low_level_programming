#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: start of the list
 * @index: length counter
 * Return: NULL or contents of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copy = head;
	unsigned int idx;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		for (idx = 0; idx < index; idx++)
		{
			if (copy == '\0')
			{
				return (NULL);
			}
			else
				copy = copy->next;
		}
	}
	return (copy);
}
