#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: linked list
 * @n: data of new node
 *
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		p = *head;

		while (p->next != NULL)
			p = p->next;
		p->next = temp;
	}

	return (temp);
}
