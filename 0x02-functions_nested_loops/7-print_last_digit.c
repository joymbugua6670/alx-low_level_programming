#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: the interger
 * Return: The last digit
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

	return (0);
}

