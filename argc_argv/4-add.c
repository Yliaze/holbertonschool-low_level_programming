#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * valid_number - verify if every argv is a valid number
 *
 * @arg: argument
 *
 * Return: 0 or 1
 */
int valid_number(char *arg)
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - a program that adds positive numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (valid_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
