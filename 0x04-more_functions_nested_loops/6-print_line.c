#include "main.h"

/**
 * print_line - number of time '_' is  useed
 * @n: number oftimes to print
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
