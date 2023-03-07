#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("argc = %d\n", argc);
	return (0);
}
