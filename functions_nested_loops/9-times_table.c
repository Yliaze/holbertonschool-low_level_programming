#include "main.h"
/**
 * times_table - the 9 times table
 * starting from 0.
 *
 *
 * Return: (void).
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = a * b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			_putchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(',');
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
