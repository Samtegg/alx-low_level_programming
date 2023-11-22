#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - this function inserts a new
 * node at a given positiion.
 * @head: the First node address.
 * @idx: the Position of the new node to be inserted in.
 * @n: the Data of the new node.
 * Return: the Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *dnew_node, *dtemp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	dtemp = *head;
	for (; i < idx - 1 && dtemp != NULL; i++)
		dtemp = dtemp->next;
	if (dtemp == NULL)
		return (NULL);
	}
	dnew_node = malloc(sizeof(listint_t));
	if (dnew_node == NULL)
		return (NULL);
	dnew_node->n = n;
	if (idx == 0)
	{
		dnew_node->next = *head;
		*head = dnew_node;
		return (dnew_node);
	}
	dnew_node->next = dtemp->next;
	dtemp->next = dnew_node;
	return (dnew_node);
}
