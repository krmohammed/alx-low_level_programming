#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in a doubly linkedlist
 * @h: head node
 *
 * Return: number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
