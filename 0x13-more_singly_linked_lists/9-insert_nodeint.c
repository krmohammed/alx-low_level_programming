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

	p2 = malloc(sizeof(listint_t));
	if (p2 == NULL)
		return (NULL);
	p2->n = n;

	if (idx == 0)
	{
		p2->next = *head;
		*head = p2;
		return (p2);
	}

	p1 = *head;
	for (k = 0; k < idx - 1 && p1 != NULL; k++)
		p1 = p1->next;

	if (p1 == NULL)
		return (NULL);

	p2->next = p1->next;
	p1->next = p2;

	return (p2);
}

