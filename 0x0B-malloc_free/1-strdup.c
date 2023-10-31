#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string to a new memory space location
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup_str = malloc(sizeof(char) * (length + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup_str[i] = str[i];

	dup_str[i] = '\0';

	return (dup_str);
}
