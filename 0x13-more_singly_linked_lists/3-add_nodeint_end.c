#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - this Adds a new node at the end of a list.
 * @head: the Address of the first node of a list.
 * @n: the Int to insert in the new node.
 * Return: the Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dtemp, *dtemp2;

	dtemp = malloc(sizeof(listint_t));
	if (dtemp == NULL)
		return (NULL);

	dtemp->n = n;
	dtemp->next = NULL;

	if (*head == NULL)
	{
		*head = dtemp;
		return (dtemp);
	}

	dtemp2 = *head;
	while (dtemp2->next)
		dtemp2 = dtemp2->next;
	dtemp2->next = dtemp;
	return (dtemp);
}
