#include "main.h"

/**
 * _isalpha - checks if character is lowercase or uppercase
 * @c: the character to be checked
 *
 * Return: return 1 if successful 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
return (0);
}
