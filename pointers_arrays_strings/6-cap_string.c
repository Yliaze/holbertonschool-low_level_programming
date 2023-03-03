#include "main.h"
/**
 * cap_string - a function that capitalizes
 * all words of a string
 *
 * @str: String input
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int s[13] = {'\t', '\n', ' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}


		for (j = 0; j <= 13; j++)
		{
			if (str[i] == s[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}

