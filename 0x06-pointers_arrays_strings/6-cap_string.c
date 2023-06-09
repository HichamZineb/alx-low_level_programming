#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capped
 *
 * Return: capped string
 */
char *cap_string(char *str)

{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] <= 'z' && str[i] >= 'a'))
			i++;
		if (
			i == 0
			|| str[i - 1] == ' '
			|| str[i - 1] == ','
			|| str[i - 1] == ';'
			|| str[i - 1] == '.'
			|| str[i - 1] == '!'
			|| str[i - 1] == '?'
			|| str[i - 1] == '"'
			|| str[i - 1] == '('
			|| str[i - 1] == ')'
			|| str[i - 1] == '{'
			|| str[i - 1] == '}'
			|| str[i - 1] == '\n'
			|| str[i - 1] == '\t')
			str[i] -= 32;
		i++;
	}
	return (str);
}
