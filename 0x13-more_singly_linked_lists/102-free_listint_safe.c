#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - this function frees a linked list
 * @h: the pointer to the first node in the linked list
 *
 * Return: the numb of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t dlen = 0;
	int ddiff;
	listint_t *dtemp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ddiff = *h - (*h)->next;
		if (ddiff > 0)
		{
			dtemp = (*h)->next;
			*h = dtemp;
			dlen++;
		}
		else
		{
			*h = NULL;
			dlen++;
			break;
		}
	}

	*h = NULL;

	return (dlen);
}
