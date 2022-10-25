#include "lists.h"
/**
 * get_nodeint_at_index - return the nth index node
 * @head: head node
 * @index: index of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	double i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
