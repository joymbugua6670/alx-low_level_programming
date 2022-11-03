#include "main.h"


/**
 * _increaseVar - returns the natural square root of a number
 * @i: the interger
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _increaseVar(int i, int n)
{
	if (i * i  == 0)
		return (i);
	if (i * i < n)
	return (_increaseVar(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}

/**
 * _sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
	return (_increaseVar(n, 1));
	}
	return (-1);
}
