#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: array to add
 * @size: size of array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
