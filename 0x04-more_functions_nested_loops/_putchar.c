#include <unistd.h>
#include "main.h"

/**
 * _putchar - character to be printed
 * @c: character inserted
 * Return: if a success input 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
