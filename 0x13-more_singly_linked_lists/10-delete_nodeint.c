#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index index
 * @head: head node
 * @index: index of the nodes
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	current = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && current != NULL; i++)
			current = current->next;
	}
	if (current == NULL || (current->next == NULL && index != 0))
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		temp = current->next;
		current->next = current->next->next;
		free(temp);
		return (1);
	}

}
