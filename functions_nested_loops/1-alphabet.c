#include "main.h"

/**
 * main - The alphabet game
 * print_alphabet - prints lower case alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{	
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
