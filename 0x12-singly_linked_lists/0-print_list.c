#include "lists.h"

/**
 * print_list - prints number of nodes
 * @h: head node
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *Ptr = NULL;

	Ptr = (list_t *)h;
	while (Ptr != NULL)
	{
		if (Ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", Ptr->len, Ptr->str);
		}
		count++;
		Ptr = Ptr->next;
	}
	return (count);
}
