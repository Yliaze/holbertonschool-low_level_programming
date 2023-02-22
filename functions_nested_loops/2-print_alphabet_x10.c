#include "main.h"

/**
 * print_alphabet_x10 - prints aphabet 10 times
 *
 **/

void print_alphabet_x10(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		int d = 0;

		while (d <= 9)
		{
			_putchar(l);
			l++;
		}

	}
	_putchar('\n');
}
