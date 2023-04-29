#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: linked list
 *
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int g;

	if (head == NULL)
		return (0);

	tempo = *head;
	g = tempo->n;
	*head = (*head)->next;
	free(tempo);

	return (g);
}
