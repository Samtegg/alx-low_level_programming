#include "main.h"

/**
 * _islower - It is to check if
 *  char is lowercase form
 * @c: The character to be checked out
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
