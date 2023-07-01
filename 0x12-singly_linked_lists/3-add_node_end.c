#include "lists.h"
/**
 * add_node_end - inserts a new node node at the end of the linked list
 * @head: pointer to first node
 * @str:
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tempo;
	unsigned int len_str = 0;

	if (head == NULL)
		return (NULL);

	tempo = malloc(sizeof(list_t));

	if (tempo == NULL)
		return (NULL);

	while (str[len_str] != '\0')
		len_str++;

	tempo->str = strdup(str);
	tempo->len = len_str;
	tempo->next = NULL;

	if (*head == NULL)
		*head = tempo;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = tempo;
	}

	return (tempo);
}
