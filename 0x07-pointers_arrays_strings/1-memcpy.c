#include "main.h"

/**
 * _memcpy- copies memory area
 * @dest: points memory area
 * @src: source of the character
 * @n: number of bytes to copy
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}


