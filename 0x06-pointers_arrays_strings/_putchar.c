#include <unistd.h>

/**
 * _putchar - use when not using printf
 * @c: a character
 * Return: 1 when successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
