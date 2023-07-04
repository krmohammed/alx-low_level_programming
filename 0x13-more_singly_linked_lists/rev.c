#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: linked list
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	p1 = NULL;
	p2 = NULL;

	if (*head == NULL)
		return (NULL);
	p1 = (*head)->next;
	(*head)->next = p2;
	while (p1 != NULL)
	{
		p2 = *head;
		p1->next = p2;
		*head = p1;
		p1 = (*head)->next;
	}
	*head = p2;

	return (*head);
}
