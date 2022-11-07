#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints when printf is restricted
 * @c: the character
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
