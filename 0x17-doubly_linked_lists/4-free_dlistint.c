#include "lists.h"
/**
 * free_dlistint - frees a dlistint list
 * @head: the start of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next != NULL)
		{
			free_dlistint(head->next);
		}
		free(head);
	}
}
