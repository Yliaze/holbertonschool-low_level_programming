#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t start = 0;
	size_t end = size - 1;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i > start)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
