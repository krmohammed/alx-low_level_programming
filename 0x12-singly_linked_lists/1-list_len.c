#include "lists.h"

/**
 * list_len - prints all members of the linked list
 * @h: linked list
 *
 * Return: number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;
	const list_t *p;

	if (h == NULL)
		return (nodes);

	p = h;

	while (p != NULL)
	{
		nodes++;
		p = p->next;
	}

	return (nodes);
}
