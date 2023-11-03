#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* Use tabs for indentation where possible */
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
