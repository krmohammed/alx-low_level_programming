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
	dlistint_t *ptr1 = *head, *ptr2;

	if ((head == NULL) | (*head == NULL))
		return (-1);
	if (index == 0)
	{
		if (ptr1->next == NULL)
		{
			*head = NULL;
			free(*head);
		}
		else
		{
			*head = ptr1->next;
			/*ptr1->next = NULL;*/
			free(ptr1);
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (i > 0)
	{
		ptr1 = ptr1->next;
		i--;
	}
	if (ptr1->next == NULL)
	{
		ptr2 = ptr1->prev;
		ptr2->next = NULL;
		/*ptr1->prev = NULL;*/
		free(ptr1);
		return (1);
	}
	else
	{
		ptr2 = ptr1->prev;
		ptr2->next = ptr1->next;
		ptr1->next->prev = ptr2;
		/*ptr1->next = NULL;
		ptr1->prev = NULL;*/
		free(ptr1);
		return (1);
	}
	return (-1);
}
