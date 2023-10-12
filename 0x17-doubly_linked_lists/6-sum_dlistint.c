
#include "lists.h"

/**
 * sum_dlistint - sums all data of a linked list
 * @head: head node
 *
 * Return: sum of all node data
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while(temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
