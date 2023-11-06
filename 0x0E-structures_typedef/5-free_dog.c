#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory associated with a dog structure.
 * @d: Pointer to the dog structure to free.
 *
 * This function frees the memory allocated.
 *
 * Return: void (no return value).
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

