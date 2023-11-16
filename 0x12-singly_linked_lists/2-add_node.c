#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - this functions adds a new node at the starting of a list
  * @head: original linked list
  * @str: string to add to node
  *
  * Return: to return the address of the new list or return NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *dtemp;

	if (head != NULL && str != NULL)
	{
		dtemp = malloc(sizeof(list_t));
		if (dtemp == NULL)
			return (NULL);

		dtemp->str = strdup(str);
		dtemp->len = _strlen(str);
		dtemp->next = *head;

		*head = dtemp;

		return (dtemp);
	}

	return (0);
}

/**
  * _strlen - this function returns the len of a string
  * @s: the string to be count
  *
  * Return: it returns the string len
  */
int _strlen(const char *s)
{
	int d = 0;

	while (*s)
	{
		s++;
		d++;
	}

	return (d);
}
