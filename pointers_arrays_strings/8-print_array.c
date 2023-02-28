#include "main.h"
/**
 * print_array - function that prints n elements of an
 * array of integers
 *
 * @a: value of a
 * @n: number of elements of the array to be printed
 *
 * Return: returns half string
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (a[i] != a[n])
		{
			printf(", ");
		}
	}
	}
	printf("\n");
}
