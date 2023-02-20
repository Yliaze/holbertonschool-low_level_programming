#include <stdio.h>

/**
 * main - Alphabet Game
 * Description: Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	printf("\n");

	return (0);
}
