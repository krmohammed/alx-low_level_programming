#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
