#include <unistd.h>

/**
 * _putchar - This function writes the char c to stdout.
 * @c: The character to be printed
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
