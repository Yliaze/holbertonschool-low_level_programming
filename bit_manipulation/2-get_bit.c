#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given index
 *
 * @n: the number on which we want to get the bit
 * @index: the index we want to extract
 *
 * Return: value of the bit we extracted
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
