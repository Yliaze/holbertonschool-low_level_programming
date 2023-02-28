#include "main.h"
/**
 * puts2 - function that prints one character out of
 * two of a string, starting with the first character
 *
 * @str: string input
 *
 * Return: returns string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
		}
		i++;
	}
	_putchar('\n');
}
