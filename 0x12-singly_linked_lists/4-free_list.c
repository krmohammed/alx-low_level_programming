#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: linked list
 *
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head->len);
	free(head);
}
