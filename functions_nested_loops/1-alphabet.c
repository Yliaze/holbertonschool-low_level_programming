#include "main.h"

/**
 * main - The alphabet game
 * Description: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
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
