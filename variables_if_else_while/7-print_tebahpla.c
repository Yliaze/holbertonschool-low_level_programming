#include <stdio.h>

/**
 * main - Smile in the mirror
 * Description: Write a program that prints the
 * lowercase alphabet in reverse, followed by a new line.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');

	return (0);
}
