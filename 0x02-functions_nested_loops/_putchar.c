#include "main.h"
#include <unistd.h>
/**
 * _putchar -This would write the character c 
 * to standard output
 * @c: Character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
