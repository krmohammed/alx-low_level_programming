#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at nth position
 * @head: singly linked list
 * @idx: nth position
 * @n: node data
 *
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p1, *p2;
	unsigned int k;

	if (*head == NULL)
		return (NULL);

	p1 = malloc(sizeof(listint_t));
	if (p1 == NULL)
		return (NULL);
	p1->n = n;
	p1->next = NULL;

	if (idx == 0)
	{
		p1->next = *head;
		*head = p1;
		return (p1);
	}

	p2 = *head;
	for (k = 0; k < idx && p2 != NULL; k++)
	{
		if (k == idx - 1)
		{
			p1->next = p2->next;
			p2->next = p1;
			return (p1);
		}
		else
			p2 = p2->next;
	}

	return (NULL);
}

