#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this function Frees a list.
 * @head: the Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *dtp, *dtp2;

	dtp = head;
	while (dtp != NULL)
	{
		dtp2 = dtp->next;
		free(dtp);
		dtp = dtp2;
	}
}
