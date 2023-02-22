#include "main.h"
/**
 * _isalpha - Shows 1 if lowercase or uppurcase c character.
 * Else, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase or uppercase. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
