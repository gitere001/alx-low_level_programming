#include "lists.h"
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: head pointer
 * Return: the number of elements in a linked dlistint_t list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		return (number_of_nodes);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);

}
