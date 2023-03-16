#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);


	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max && j < (max - min + 1); i++, j++)
		p[j] = i;

	return (p);
}
