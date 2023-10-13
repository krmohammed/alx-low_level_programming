#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to head node
 * @index: position of node
 *
 * Return: 1 on success, -1 on failure
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = index;
	dlistint_t *ptr1 = *head;

	if ((head == NULL) | (*head == NULL))
		return (-1);
	if (index == 0 && ptr1->next == NULL)
	{
		*head = NULL;
		free(ptr1);
		return (1);
	}
	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		(*head)->prev = NULL;
		return (1);
	}
	for (; i > 0 && ptr1 != NULL; i--)
		ptr1 = ptr1->next;
	if (i > 0)
		return (-1);
	if (ptr1->next == NULL)
	{
		ptr1->prev->next = NULL;
		free(ptr1);
		return (1);
	}
	else
	{
		ptr1->prev->next = ptr1->next;
		ptr1->next->prev = ptr1->prev;
		free(ptr1);
		return (1);
	}
	return (-1);
}
