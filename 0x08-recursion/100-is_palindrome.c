#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function checks if a string is a palindrome
 * @s: the string to reverse
 *
 * Return: one if it is, zero it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function returns the len of a string
 * @s: the string to calc the len of
 *
 * Return: len of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function checks the char recursively for palindrome
 * @s: the string to check
 * @i: the iterator
 * @len: the len of the string
 *
 * Return: one if palindrome, zero if no
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));
}
