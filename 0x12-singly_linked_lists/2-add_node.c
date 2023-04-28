#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to first node
 * @str: data of node to be added
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int str_len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	ptr->str = strdup(str);
	ptr->len = str_len;
	ptr->next = *head;

	*head = ptr;

	return(ptr);
}
