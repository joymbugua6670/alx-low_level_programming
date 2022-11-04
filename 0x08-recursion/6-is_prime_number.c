#include "main.h"


/**
 * _isitprime - says if an integer is a prime number or not
 * @n: number to evaluat
 * @i: the number divide by 2
 * Return: 1 if n is a prime number, 0 if not
 */

int _isitprime(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		if (n % 1 == 0)
			return (0);
		else
			return (_isitprime(n, i - 1));
	}
}

/**
 * is_prime_number-look for prime numbers
 * @n: number
 * Return: 0 and 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));
}
