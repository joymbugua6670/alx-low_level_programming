#include "main.h"

/**
 * _strpbrk - search a string fromany set
 * @s: the string to search
 * @accept: the set of bytes to searchfor
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
