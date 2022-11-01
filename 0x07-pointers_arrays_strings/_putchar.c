#include "main.h"
#include <unistd.h>

/**
 * _puthar - used to print
 * @c: represents the character
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

