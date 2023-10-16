#include "main.h"
/**
 * _strlen - this will return the
 * total length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
