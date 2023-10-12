#include "main.h"

/**
 * _isdigit - this checks if nums are 0 - 9
 * @c: characters to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
