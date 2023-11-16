#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - this function adds a new node at the end of a list
  * @head: this the original linked list
  * @str: this is the string to be added to the node
  *
  * Return: it should return the address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dnew_list, *dtemp;

	if (str != NULL)
	{
		dnew_list = malloc(sizeof(list_t));
		if (dnew_list == NULL)
			return (NULL);

		dnew_list->str = strdup(str);
		dnew_list->len = _strlen(str);
		dnew_list->next = NULL;

		if (*head == NULL)
		{
			*head  = dnew_list;
			return (*head);
		}
		else
		{
			dtemp = *head;
			while (dtemp->next)
				dtemp = dtemp->next;

			dtemp->next = dnew_list;
			return (dtemp);
		}
	}

	return (NULL);
}

/**
  * _strlen - this returns the len of a string
  * @s: this is the String to be counted
  *
  * Return: should return the string length
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
