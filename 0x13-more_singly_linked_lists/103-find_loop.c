#include "lists.h"

/**
 * find_listint_loop - Detects a loop in a linked list.
 * @head: Pointer to the head of a list.
 *
 * Return: The address of the node where the loop begins, or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *prev;

	p2 = head;
	prev = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != head && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
