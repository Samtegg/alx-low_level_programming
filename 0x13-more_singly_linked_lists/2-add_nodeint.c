#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - this function Adds a new node at the beginning of a list.
 * @head: the Address of the first node of a list.
 * @n: the Int to insert into the new node.
 * Return: the Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dtp;

	dtp = malloc(sizeof(listint_t));
	if (dtp == NULL)
		return (NULL);

	dtp->n = n;
	dtp->next = *head;
	*head = dtp;
	return (*head);
}
