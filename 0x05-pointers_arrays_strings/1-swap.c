#include "main.h"
/**
 * swap_int - this will swap the values of both integers
 * @a: the integer to be swap
 * @b: the integer to be swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
