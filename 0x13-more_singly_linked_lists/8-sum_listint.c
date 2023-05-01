#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data of a linked list
 * @head: linked list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (head == NULL)
		return (0);

	p = head;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return(sum);
}
