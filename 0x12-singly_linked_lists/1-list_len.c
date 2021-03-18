#include "lists.h"
/**
 * list_len - returns the number of elements ina linked list_t list
 * @h: the start of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
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
