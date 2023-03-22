#include "3-calc.h"
#include <stdlib.h>

/**
 * main - a program that performs simple operations
 *
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (get_op_func(argv[2])(num1, num2)));
	return (0);
}
