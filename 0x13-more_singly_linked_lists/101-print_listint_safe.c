#include "lists.h"

/**
 * print_listint_safe - prints a linked list in safe mode
 * @head: linked list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int nodes = 0;

	if (head == NULL)
		exit(98);

	fast = head;
	while (fast != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)fast, fast->n);
		slow = fast;
		fast = fast->xt;

		if (fast >= slow)
			{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}

	return (nodes);
}