#include "main.h"

/**
 * _memset- first bytes
 * @s: memory area to fill
 * @b: character to fill
 * @n: number of bytes to fill
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
