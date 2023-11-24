#include "main.h"

/**
 * set_bit - this program will set the value
 * of a bit to 1 at a given index.
 * @n: the num to set
 * @index: the index at which to set bit
 *
 * Return: returns 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dsetbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dsetbit = 1 << index;
	*n = *n | dsetbit;
	return (1);
}
