#include "main.h"

/**
 * char *_strcpy - this  function  copies
 * the string shown by src
 * @dest: this is copy to
 * @src: this is copy from
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
