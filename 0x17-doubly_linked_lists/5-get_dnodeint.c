#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: start of the list
 * @index: position variable
 *
 * Return: nth node content, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);
		}
		current = current->next;
		counter++;
	}
	return (NULL);
}
