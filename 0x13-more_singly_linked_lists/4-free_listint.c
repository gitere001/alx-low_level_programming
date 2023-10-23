#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head pointer to the linklist
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
