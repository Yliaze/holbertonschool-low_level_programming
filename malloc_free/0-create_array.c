#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array to be created
 * @c: char to put in the array
 *
 * Return: NULL or char
 */
char *create_array(unsigned int size, char c)
{
	char *array = 0;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
