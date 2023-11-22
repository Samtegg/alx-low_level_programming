#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - this function Deletes a node at a given positiion.
 * @head: the First node address.
 * @index: the Position of the node to delete.
 * Return: returns If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *dcurrent, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	dcurrent = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (dcurrent->next == NULL)
			return (-1);
		dcurrent = dcurrent->next;
	}
	next = dcurrent->next;
	dcurrent->next = next->next;
	free(next);
	return (1);
}
