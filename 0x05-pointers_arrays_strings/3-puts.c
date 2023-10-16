#include "main.h"
/**
 * _puts - this prints out a string, 
 * then followed by a new line, to standout
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
