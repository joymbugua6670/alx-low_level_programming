#include "main.h"

/**
 * _strlen - length of string
 * @s: the size
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
