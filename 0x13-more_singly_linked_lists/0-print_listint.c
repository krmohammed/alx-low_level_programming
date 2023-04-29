#include "lists.h"

/**
 * print_listint - prints the all elements of a singly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int n_nodes = 0;
	const listint_t *p;

	if (h == NULL)
		return (n_nodes);

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (n_nodes);

	p = h;

	while (p != NULL)
	{
		n_nodes++;
		printf("%d\n", p->n);
		p = p->next;
	}


	return (n_nodes);
}
