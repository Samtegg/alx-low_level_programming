#include "main.h"

/**
 * flip_bits - this function counts the
 * numb of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: returns numb of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int da, dcountbit = 0;
	unsigned long int dcurrent;
	unsigned long int dexclusive = n ^ m;

	for (da = 63; da >= 0; da--)
	{
		dcurrent = dexclusive >> da;
		if (dcurrent & 1)
			dcountbit++;
	}

	return (dcountbit);
}
