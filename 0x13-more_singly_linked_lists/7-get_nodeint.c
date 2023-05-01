#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linkded list
 * @head: linked ist
 * @index: nth node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	p = head;

	for (i = 0; p != NULL; i++)
	{
		if (i == index)
		{
			return (p);
		}
		p = p->next;
	}

	return (NULL);
}
