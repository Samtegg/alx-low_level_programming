#include "main.h"
/**
 * _memset - this will give a block of memory with value
 * @s: the starting address of the to be filled memory
 * @b: desired value
 * @n: the num of bytes to be changed
 *
 * Return: array changed with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
