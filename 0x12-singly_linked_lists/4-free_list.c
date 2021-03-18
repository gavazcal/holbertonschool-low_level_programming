#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: start
 */
void free_list(list_t *head)
{
	list_t *lava_baby;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		lava_baby = head->next;
		free(head->str);
		free(head);
		head = lava_baby;
	}
}
