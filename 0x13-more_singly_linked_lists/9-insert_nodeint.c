#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at a given position
 * @head: head node
 * @idx: index of the node
 * @n: value of new node
 * Return: adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;
	if (idx != 0)
	{
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	}
	if (current == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current->next;
			current->next = new;
	}
	return (new);
}
