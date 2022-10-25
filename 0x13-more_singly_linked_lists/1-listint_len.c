#include "lists.h"
/**
 * listint_len - gives number of nodes
 * @h: head node
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
