#include "main.h"

/**
 * print_square - a function that prints a square, followed
 *
 * @size : size of the square
 *
 * Return: (void)
 */
void print_square(int size)
{
	int ligne;
	int colonne;

	if (size > 0)
	{
		for (colonne = 1000; colonne > 1000 - size ; colonne--)
		{
			for (ligne = 0; ligne < size; ligne++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
