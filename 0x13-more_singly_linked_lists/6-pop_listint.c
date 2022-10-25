#include "lists.h"
/**
 * pop_listint - delete head node and return n
 *
 * @head: head node
 * Return: value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *new_head;
	int x;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	x = temp->n;
	new_head = temp->next;
	free(temp);
	*head = new_head;
	return (x);
}
