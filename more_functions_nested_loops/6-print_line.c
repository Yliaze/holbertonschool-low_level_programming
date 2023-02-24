#include "main.h"

/**
 * print_line - function that draws a straight line
 * in the terminal
 *
 * @n : number of times the character _ should be printed
 *
 * Return: (void)
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
