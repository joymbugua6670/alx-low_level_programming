#include "main.h"

/**
 * _isalpha - check whetherv lower or uppercase
 * @c: is character
 * Return: 1 if lower or uppercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
