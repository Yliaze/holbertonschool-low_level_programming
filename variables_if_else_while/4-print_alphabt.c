#include <stdio.h>

/**
 * main - Except q and e
 * Description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
		lowercase++;
	}
	putchar('\n');

	return (0);
}
