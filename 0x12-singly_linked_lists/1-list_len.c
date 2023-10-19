#include "lists.h"
/**
 * list_len - calculate the length of nodes
 * @h: head pointer
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
