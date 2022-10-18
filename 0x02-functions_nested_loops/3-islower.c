#include "main.h"

/**
 * _islower - chech for lowercase characters
 * Return: 1 if lowercase else 0
 * @c: character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
