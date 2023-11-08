#include "function_pointers.h"

/**
 * int_index - Returns the index if comparison is true, else -1.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function used for comparison.
 *
 * Return: Index if found, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
