#include "lists.h"
/**
 * sum_listint - sums the nodes of a listint_t list
 * @head: start of the list
 * Return: integer sum
 */
int sum_listint(listint_t *head)
{
	listint_t *copy = head;
	int result = 0;

	while (copy)
	{
		result = result + copy->n;
		copy = copy->next;
	}
	return (result);
}
