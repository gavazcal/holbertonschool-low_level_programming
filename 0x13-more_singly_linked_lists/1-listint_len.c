#include "lists.h"
/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: the head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
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
			h = h->next;
			node_len++;
		}
	}
	return (node_len);
}
