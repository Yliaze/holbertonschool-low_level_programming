#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: input array
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;

	for (row = 0; row < 8; row++)
	{
		int column = 0;

		for (column = 0; column < 8; column++)
		{
			putchar(a[row][column]);
		}
		putchar('\n');
	}
}
