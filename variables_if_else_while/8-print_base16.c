#include <stdio.h>

/**
 * main - Hexadecimal
 * Description: Write a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	char l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
