#include "main.h"

/**
 * print_diagonal - function that draws a diagonal
 * line on the terminal.
 *
 * @n : number of times the character \ should be printed
 *
 * Return: (void)
 */
void print_diagonal(int n)
{
	int c, d;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d < c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
