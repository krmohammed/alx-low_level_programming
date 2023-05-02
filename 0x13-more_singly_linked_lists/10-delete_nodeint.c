#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at nth position
 * @head: linked list
 * @index: nth position
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p1, *p2;
	unsigned int j;

	if (*head == NULL)
		return (-1);

	p1 = *head;
	p2 = *head;

	if (index == 0)
	{
		*head = p1->next;
		free(p1);
		p1 = NULL;

		return (1);
	}

	for (j = 1; j < index + 1 && p1 != NULL; j++)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1 == NULL)
		return (-1);

	p2->next = p1->next;
	free(p1);
	p1 = NULL;

	return (1);
}
