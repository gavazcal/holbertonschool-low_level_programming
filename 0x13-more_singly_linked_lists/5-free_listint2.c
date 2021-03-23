#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: start of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *copy;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			copy = *head;
			*head = copy->next;
			free(copy);
		}
		*head = NULL;
	}
}
