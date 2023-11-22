#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this function deletes the first element of a
 * singly linked list.
 * @head: the Pointer to a list.
 * Return: the Int if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *dtp;
	int dmy_data;

	if (*head == NULL)
		return (0);

	dtp = *head;
	*head = dtp->next;
	dmy_data = dtp->n;
	free(dtp);
	return (dmy_data);
}
