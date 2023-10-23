#include "lists.h"

/**
 * listint_len - a function that return the length
 * of a singly linked list
 * @h: header pointer
 * Return: length of the struct
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
