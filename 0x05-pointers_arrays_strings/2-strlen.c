#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: pointer to string
 *
 * Return: returns length
 */
int _strlen(char *s)

{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
