#include "main.h"
/**
 * _islower - Shows 1 if lowercase character.
 * Else, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
