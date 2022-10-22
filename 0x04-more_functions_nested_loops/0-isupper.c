#include "main.h"

/**
 * _isupper - print uppercase characters
 * @c: the character
 * Return: 1 when successful 0 when not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
