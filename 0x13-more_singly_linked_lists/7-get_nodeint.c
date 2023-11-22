#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - this function Finds a node in a list.
 * @head: the Address of the first node in a list.
 * @index: the Position of a the node to find (starting from 0).
 * Return: the Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int dy = 0;

	if (head == NULL)
		return (NULL);
	for (dy = 0; dy < index; dy++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
