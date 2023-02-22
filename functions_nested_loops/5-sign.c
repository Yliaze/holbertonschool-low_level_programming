#include "main.h"
/**
 * _sign - Shows 1 if greater than zero.
 * Shows 0 if zero.
 * Shows -1 if less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 for positive. 0 for the rest. -1 for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
