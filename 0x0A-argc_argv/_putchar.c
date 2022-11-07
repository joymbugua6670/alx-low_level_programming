#include "main.h"

/**
 * _putchar - print when not using printf
 * Return: 0
 */

int _puutchar(char c)
{
	return (write(1, &c, 1));
}
