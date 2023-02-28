#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: string input
 *
 * Return: returns half string
 */
void puts_half(char *str)
{
	int count = 0;
	int middle;
	int i = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if ((count % 2) != 0)
	{
		middle = (count + 1) / 2;
	}
	else
	{
		middle = count / 2;
	}

	for (i = middle; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
