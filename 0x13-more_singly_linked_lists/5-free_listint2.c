#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - this function Frees a list.
 * @head: the Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *dtemp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		dtemp = (*head)->next;
		free(*head);
		*head = dtemp;
	}
}
