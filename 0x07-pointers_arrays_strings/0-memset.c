#include "main.h"

/**
 * _memset- first bytes
 * @s: memory area to fill
 * @c: character to fill
 * @n: number of bytes to fill
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory + s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
