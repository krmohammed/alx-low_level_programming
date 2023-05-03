#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to linked list
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *p1, *p2;
	int nodes = 0;

	if (h == NULL || *h == NULL)
		return (nodes);

	p1 = *h;
	while (p1 != NULL)
	{
		nodes++;
		p2 = p1->next;
		free(p1);

		if ((void *)p2 >= (void *)p1)
		{
			*h = NULL;
			return (nodes);
		}
		p1 = p2;
	}

	h = NULL;

	return (nodes);
}
