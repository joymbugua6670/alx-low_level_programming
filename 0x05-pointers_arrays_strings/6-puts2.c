#include "main.h"

/**
 * puts2 - print first character
 * @str: put a string
 * Return: 0
 */

void puts2(char *str)
{
	int = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
