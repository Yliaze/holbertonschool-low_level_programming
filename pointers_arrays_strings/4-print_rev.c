#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: string input
 *
 * Return: returns string
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count = count - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
