#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
