#include "main.h"
/**
 * _isupper - the uppercase alphabet
 * @c: char to be checked
 *
 * Return: either 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}
