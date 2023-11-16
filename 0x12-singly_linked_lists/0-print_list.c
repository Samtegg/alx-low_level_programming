#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - this function prints elements of a list
  * @h: One linked list
  *
  * Return: The num of nodes to return
  */
size_t print_list(const list_t *h)
{
	size_t dcount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		dcount++;
	}

	return (dcount);
}
