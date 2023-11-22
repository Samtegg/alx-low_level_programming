#include "lists.h"

/**
 * print_listint_safe - this function prints a linked list, safely
 * @head: the list of type listint_t to print
 *
 * Return: the num of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t dnum = 0;
	long int ddiff;

	while (head)
	{
		ddiff = head - head->next;
		dnum++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (ddiff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (dnum);
}
