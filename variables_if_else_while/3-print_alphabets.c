#include <stdio.h>

/**
 * main - AlphABET
 * Description: Write a program that prints the alphabet
 * in lowercase, and THEN UPPERCASE, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	printf("\n");

	return (0);
}
