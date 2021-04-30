#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
