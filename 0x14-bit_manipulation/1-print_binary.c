#include "main.h"

/**
 * _pow - this function calculates the (base ^ power)
 * @base: this is the base of the exponent
 * @power: this is the power of the exponent
 *
 * Return: this is the value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int dnum;
	unsigned int da;

	dnum = 1;
	for (da = 1; da <= power; da++)
		dnum *= base;
	return (dnum);
}

/**
 * print_binary -this function prints a number in binary notation
 * @n: the num to print
 *
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ddivisor, dcheck;
	char dflag;

	dflag = 0;
	ddivisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (ddivisor != 0)
	{
		dcheck = n & ddivisor;
		if (dcheck == ddivisor)
		{
			dflag = 1;
			_putchar('1');
		}
		else if (dflag == 1 || ddivisor == 1)
		{
			_putchar('0');
		}
		ddivisor >>= 1;
	}
}

