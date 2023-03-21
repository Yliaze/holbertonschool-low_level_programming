#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 *
 * @name: string to add
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
