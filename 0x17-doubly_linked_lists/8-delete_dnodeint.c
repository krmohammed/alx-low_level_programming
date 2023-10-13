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
	unsigned int i = 0;
	dlistint_t *ptr1 = *head, *ptr2, *ptr3;
	
	if ((head == NULL) | (*head == NULL))
		return (-1);
	while (ptr1 != NULL)
	{
		if (i++ == index)
			break;
		ptr1 = ptr1->next;
	}
	if ((ptr1->prev == NULL) && (ptr1->next == NULL))
	{
		*head = NULL;
		return (1);
	}
	if (ptr1->prev == NULL)
	{
		*head = ptr1->next;
		(*head)->prev = NULL;
		ptr1->next = NULL;
		return (1);
	}
	if (ptr1->next == NULL)
	{
		ptr2 = ptr1->prev;
		ptr2->next = NULL;
		ptr1->prev = NULL;
		return (1);
	}
	else
	{
		ptr3 = ptr1->next;
		ptr2 = ptr1->prev;
		ptr2->next = ptr3;
		ptr3->prev = ptr2;
		ptr1->next = NULL;
		ptr1->prev = NULL;
		return (1);
	}
	return (-1);
}
