#include "main.h"
/**
 * _isupper - Shows 1 if uppercase
 * character. Else, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase. 0 for the rest.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
