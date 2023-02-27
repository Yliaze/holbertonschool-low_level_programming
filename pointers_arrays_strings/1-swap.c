#include "main.h"
/**
 * swap_int - function that swaps the values of two
 * integers.
 *
 * @a: address of a value
 * @b: address of b value
 *
 * Return: (void)
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
