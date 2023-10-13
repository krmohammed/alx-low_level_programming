#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: head node
 * @n: data
 *
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

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

	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);
}
