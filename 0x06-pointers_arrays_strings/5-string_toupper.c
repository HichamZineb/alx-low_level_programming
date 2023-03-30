#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: changed string
 */
char *string_toupper(char *str)

{
	int i;
	int a;
	int b;
	/*int n;*/

	/*for (n = 0; str[n] != '\0'; n++)*/
	for (i = 0; str[i] != '\0'; i++)
	{
		a = str[i];
		if (a <= 122 && a >= 97)
		{
			b = a - 32;
		}
		else
		{
			b = a;
		}
		str[i] = b;

	}
	return (str);
}
