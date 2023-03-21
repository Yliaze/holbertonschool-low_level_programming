#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: array to add
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
