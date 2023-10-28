#include "main.h"
/**
 * _strlen - it returns len of a string
 * @s: the string
 * Return: the len
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
