#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog structure.
 * @d: Pointer to the dog structure to print.
 *
 * This function prints the information contained in a dog structure, including
 * the name, age, and owner. If any of these fields are NULL, it prints (nil)
 * as a placeholder.
 *
 * Return: void (no return value).
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

