#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to head node
 * @idx: index
 * @n: node data
 *
 * Return: adress of new node on success, NULL otherwise
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *ptr1 = *h, *ptr2;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		i = 1;
		while (ptr1 != NULL)
		{
			if (i++ == idx)
				break;
			ptr1 = ptr1->next;
		}
		if (idx >= i)
			return (NULL);
		if (ptr1->next == NULL)
			add_dnodeint_end(h, n);
		else
		{
			ptr2 = ptr1->next;
			temp->next = ptr2;
			temp->prev = ptr1;
			ptr1->next = temp;
			ptr2->prev = temp;
		}
	}
	return (temp);
}
