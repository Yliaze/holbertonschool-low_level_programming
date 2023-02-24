#include "main.h"

/**
* print_numbers - function that prints the numbers,
* from 0 to 9
*
* Return: (void)
*/
void print_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
