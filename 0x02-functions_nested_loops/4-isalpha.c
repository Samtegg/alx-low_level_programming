#include "main.h"

/**
 * _isalpha - This will check
 *  for any alphabetic characters
 * @c: This is the character to be examined
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
