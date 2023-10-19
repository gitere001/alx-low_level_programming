#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: Frees each node in the linked list and the strings they hold.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
