#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: the character to be checked
 *
 * Return: return 1 if successful 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
return (0);
}
