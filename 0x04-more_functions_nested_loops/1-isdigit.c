#include "main.h"

/**
 * _isdigit - digit to print
 * @c: the interger
 * Return: 1 if the number is 0-9 to else 0
 */

int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
