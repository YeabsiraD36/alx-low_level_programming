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
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;

	value = temp->n;

	new_head = temp->next;

	free(temp);

	*head = new_head;

	return (value);
}
