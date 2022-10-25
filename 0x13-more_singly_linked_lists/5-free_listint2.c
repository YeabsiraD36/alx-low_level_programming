#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
