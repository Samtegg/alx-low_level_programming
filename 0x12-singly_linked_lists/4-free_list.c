#include <stdlib.h>
#include "lists.h"

/**
  * free_list - this frees up a linked list.
  * @head: This is the pointer to the first node of linked list
  *
  * Return: it should return nothing
  */
void free_list(list_t *head)
{
	list_t *dtemp;

	while (head)
	{
		dtemp = head;
		head = head->next;
		free(dtemp->str);
		free(dtemp);
	}

	free(head);
}
