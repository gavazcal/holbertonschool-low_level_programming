#include "lists.h"
/**
 * pop_listint - pops the head
 * @head: start of the list
 * Return: the contents of the popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *copy = *head;
	int content;

	if (!*head)
	{
		return (0);
	}
	else
	{
		content = copy->n;
		*head = copy->next;
		free(copy);
	}
	return (content);
}
