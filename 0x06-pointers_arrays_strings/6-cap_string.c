#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capped
 *
 * Return: capped string
 */
char *cap_string(char *str)

{
	int i, b, c;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '.' || str[i] == 0)
		{
			b = str[i];
			if (b <= 'z' && b >= 'a')
			{
				c = b - 32;
			}
			else
			{
				c = b;
			}
			str[i] = c;
		}
		if (str[i - 1] == '\n' || str[i - 1] == '\t')
		{
			b = str[i];
			if (b <= 'z' && b >= 'a')
			{
				c = b - 32;
			}
			else
			{
				c = b;
			}
			str[i] = c;
		}
	}
	return (str);
}
