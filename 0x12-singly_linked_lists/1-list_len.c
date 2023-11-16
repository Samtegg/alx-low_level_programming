#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - This function shows the num of elements of a list
  * @h: The linked list
  *
  * Return: This returns the numb of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t dcount = 0;

	while (h)
	{
		h = h->next;
		dcount++;
	}

	return (dcount);
}
