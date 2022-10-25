#include "main.h"

/**
 * swap_int - swaps values
 * @a: first number
 * @b: second number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
