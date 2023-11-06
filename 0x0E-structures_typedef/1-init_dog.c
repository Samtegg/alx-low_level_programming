#include "dog.h"

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 *	This function initializes a dog structure with the provided information.
 *
 * Return: void (no return value).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
