#include "variadic_functions.h"

/**
 * type_char - type char
 *
 * @ap: arguments parameters
 *
 * Return: print char
 */
void type_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * type_int - type int
 *
 * @ap: arguments parameters
 *
 * Return: print int
 */
void type_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * type_float - type float
 *
 * @ap: arguments parameters
 *
 * Return: print float
 */
void type_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * type_string - type string
 *
 * @ap: arguments parameters
 *
 * Return: print string
 */
void type_string(va_list ap)
{
	printf("%s", va_arg(ap, char*));
}

/**
 * print_all - function that print anything
 *
 * @format: list of types of arguments
 * passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	unsigned int i = 0;
	unsigned int j = 0;
	type_select toa[] = {
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{'\0', NULL}
	};


	va_start(ap, format);

	while (format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *toa[j].select)
			{
				toa[j].f(ap);
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(ap);
}
