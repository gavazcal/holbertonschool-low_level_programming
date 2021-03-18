#include "lists.h"
/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: first element of the list
 * @str: pointer to string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int idx, new_node_len;
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		new_node_len++;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = new_node_len;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);

}
