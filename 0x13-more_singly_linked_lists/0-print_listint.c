#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this function prints elements of a singly linked list.
 * @h: the Pointer to a list.
 * Return: the Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *dtp;
	unsigned int dcntr = 0;

	dtp = h;
	while (dtp)
	{
		printf("%d\n", dtp->n);
		cntr++;
		dtp = dtp->next;
	}
	return (dcntr);
}
