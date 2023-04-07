#include "main.h"

/**
 * binary_to_uint - function taht prints the binary
 * representation of the number
 *
 * @b: pointer to a string of character that should
 * be 1 or 0
 *
 * Return: an int that is the representation of the
 * binary from the string.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0;

	if (!b)
		return (sum);
	while (b[len] != '\0')
		len++;
	len -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}
	return (sum);
}
