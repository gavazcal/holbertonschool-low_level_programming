#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *copy = head;

	while (copy)
	{
		head = head->next;
		free(copy);
		copy = head;
	}
}
