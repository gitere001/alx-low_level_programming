#include "lists.h"

/**
 * clear_my_list - Safely frees a linked list.
 * @my_head: Pointer to the head of a list.
 *
 * Description: This function safely frees a linked list of listint_t nodes
 * while detecting and handling loops, and returns the number of nodes freed.
 */
void clear_my_list(listp_t **my_head)
{
	listp_t *my_temp;
	listp_t *my_curr;

	if (my_head != NULL)
	{
		my_curr = *my_head;
		while ((my_temp = my_curr) != NULL)
		{
			my_curr = my_curr->next;
			free(my_temp);
		}
		*my_head = NULL;
	}
}

/**
 * free_listint_safe - Safely frees a linked list of listint_t nodes.
 * @h: Pointer to the head of the list.
 *
 * Description: This function safely frees a linked list of listint_t nodes
 * while detecting and handling loops, and returns the number of nodes freed.
 * Return: nothing
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listp_t *my_ptr, *my_new, *my_add;
	listint_t *my_curr;

	my_ptr = NULL;
	while (*h != NULL)
	{
		my_new = malloc(sizeof(listp_t));

		if (my_new == NULL)
			exit(98);

		my_new->p = (void *)*h;
		my_new->next = my_ptr;
		my_ptr = my_new;

		my_add = my_ptr;

		while (my_add->next != NULL)
		{
			my_add = my_add->next;
			if (*h == my_add->p)
			{
				*h = NULL;
				clear_my_list(&my_ptr);
				return (node_count);
			}
		}

		my_curr = *h;
		*h = (*h)->next;
		free(my_curr);
		node_count++;
	}

	*h = NULL;
	clear_my_list(&my_ptr);
	return (node_count);
}
