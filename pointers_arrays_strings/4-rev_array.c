#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 *
 * @a: array of integers to reverse
 * @n: the numer of elements to swap
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;
	
	n = n - 1;
	while (i < n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n--;
		i++;
	}
}
