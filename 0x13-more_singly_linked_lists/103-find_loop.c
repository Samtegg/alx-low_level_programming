#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: the linked list to search for
 *
 * Return: the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dslow = head;
	listint_t *dfast = head;

	if (!head)
		return (NULL);

	while (dslow && dfast && dfast->next)
	{
		dfast = dfast->next->next;
		dslow = dslow->next;
		if (dfast == dslow)
		{
			dslow = head;
			while (dslow != dfast)
			{
				dslow = dslow->next;
				dfast = dfast->next;
			}
			return (dfast);
		}
	}

	return (NULL);
}
