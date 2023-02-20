#include <stdio.h>

/**
 * main - Numbers
 * Description: Write a program that prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
