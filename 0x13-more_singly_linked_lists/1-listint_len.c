#include "lists.h"

/**
 * listint_len - calculates number of nodes in a linked list
 * @h: linkded list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	int nodes = 0;

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
