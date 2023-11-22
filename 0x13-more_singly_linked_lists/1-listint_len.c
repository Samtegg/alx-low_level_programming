#include "lists.h"

/**
 * listint_len - this Calculates the numb of elements.
 * @h: the Pointer to a list.
 * Return: the Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *dtp;
	unsigned int dcnr = 0;

	dtp = h;
	while (dtp)
	{
		dcnr++;
		dtp = dtp->next;
	}
	return (dcnr);
}
