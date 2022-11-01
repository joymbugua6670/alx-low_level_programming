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
	unsigned char *destination = dest;
	const unsigned char *source =scr;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}


