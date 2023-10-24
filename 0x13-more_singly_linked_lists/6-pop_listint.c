#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 * @head: pointer to the head pointer
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(temp);

	return (data);
}
