#include"main.h"

/**
 * get_bit - this program will return the value of a bit at a given index.
 * @n: the num to check bits in
 * @index: the index at which to check the bit
 *
 * Return: returns value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ddivisor, dcheck;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	ddivisor = 1 << index;
	dcheck = n & ddivisor;
	if (dcheck == ddivisor)
		return (1);
	return (0);
}
