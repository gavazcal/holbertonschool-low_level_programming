#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_len = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			printf("%i\n", h->n);
			node_len++;
			h = h->next;
		}
	}
	return (node_len);
}
