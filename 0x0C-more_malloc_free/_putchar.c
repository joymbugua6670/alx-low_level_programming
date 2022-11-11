#include "main.h"

/**
 * _putchar.c - print instead of printf
 * @c: the character
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
