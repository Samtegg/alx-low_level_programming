#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - this function Sums all of the data (n) in a list.
 * @head: the Address of the first node of the list.
 * Return: the Int.
 **/

int sum_listint(listint_t *head)
{
	int dtotal = 0;

	while (head != NULL)
	{
		dtotal += head->n;
		head = head->next;
	}
	return (dtotal);
}
