#include "main.h"

/**
 * _puts - strings followed by new  line
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
