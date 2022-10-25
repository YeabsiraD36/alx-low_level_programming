#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: head node
 * Return: sum of the values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
