#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * This function creates a new dog structure and initializes its name, age, and owner
 * using the provided information. It allocates memory for the structure and its
 * fields and returns a pointer to the new dog structure.
 *
 * Return: Pointer to the new dog structure (dog_t) or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (nl = 0; name[nl]; nl++)
		;
	nl++;

	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];

	dog->age = age;

	for (ol = 0; owner[ol]; ol++)
		;
	ol++;

	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];

	return (dog);
}

