#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp = h;

	while(temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
