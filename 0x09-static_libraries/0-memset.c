#include "main.h"
/**
 * _memset - this program will fill one block
 * of memory with a value
 * @s: the starting address of memory to fill
 * @b: the value
 * @n: num of bytes to change
 *
 * Return: the manipulated array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;


	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}
