#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: head node
 * @n: node data
 *
 * Return: address of new node, NULL on failure
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr1;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr1 = *head;
	while (ptr1->next != NULL)
		ptr1 = ptr1->next;

	temp->prev = ptr1;
	ptr1->next = temp;

	return (temp);
}
