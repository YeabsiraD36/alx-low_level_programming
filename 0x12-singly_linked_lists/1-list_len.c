#include "lists.h"

/**
 * list_len - tells number of elements
 * @h: head node
 * Return: number of elemnts
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
