#include "main.h"

/**
 * _putchar - prints instructions
 * @c: the character
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
