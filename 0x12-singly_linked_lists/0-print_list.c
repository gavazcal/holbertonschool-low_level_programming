#include "lists.h"
/**
 * print_list - prints the elements of a list_t list
 * @h: head
 * Return: length in nodes
 */
size_t print_list(const list_t *h)
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
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%i] %s\n", h->len, h->str);
			}
			h = h->next;
			node_len++;
		}
	}
	return (node_len);
}
