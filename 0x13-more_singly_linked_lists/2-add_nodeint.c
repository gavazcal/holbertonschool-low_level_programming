#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the start
 * @n: int to add
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (0);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
