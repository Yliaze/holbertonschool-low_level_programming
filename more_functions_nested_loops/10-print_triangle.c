#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *
 * @size : size of the triangle
 *
 * Return: (void)
 */
void print_triangle(int size)
{
	int ligne;
	int colonne;
	int cl;

	if (size >= 0)
	{
		for (ligne = 0; ligne < size ; ligne++)
		{
			for (colonne = size - ligne; colonne > 1; colonne--)
			{
				_putchar(' ');
			}
			for (cl = colonne + ligne; cl >= 1; cl--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
