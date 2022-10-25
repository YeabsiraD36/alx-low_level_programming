#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *h1;

	h = NULL;
	h1 = NULL;
	while (*head != NULL)
	{
		h = (*head)->next;
		(*head)->next = h1;
		h1 = *head;
		*head = h;
	}
	*head = h1;
	return (*head);
}
