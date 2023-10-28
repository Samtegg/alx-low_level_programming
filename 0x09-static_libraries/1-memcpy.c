#include "main.h"
/**
 *_memcpy - this function copies memory area
 *@dest: the memory where it is stored
 *@src: the memory where it is copied
 *@n: the num of bytes
 *
 *Return: the memory copied with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
