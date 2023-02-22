#include "main.h"

/**
 * print_alphabet_x10 - prints aphabet 10 times
 *
 **/

void print_alphabet_x10(void)
{
	int d = 0;

	while (d <= 9)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		d++;
		_putchar('\n');
	}
}
