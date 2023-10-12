#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr;

	ptr = head;

	while (head != NULL)
	{
		if (index == i++)
			return (ptr);
		ptr = ptr->next;
	}

	return (NULL);
}
