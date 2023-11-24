#include <unistd.h>

/**
 * _putchar - this writes the charact c to stdout
 * @c: The charact to be print
 *
 * Return: returns On success 1.
 * returns On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
