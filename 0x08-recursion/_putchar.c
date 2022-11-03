#include <unistd.h>

/**
 * _putchar- use to print
 * @c: the character
 * Return: 0
 */

int _putchar(charc)
{
	return (write(1, &c, 1));
}
