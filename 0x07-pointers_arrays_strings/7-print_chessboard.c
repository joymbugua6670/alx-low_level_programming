#include "main.h"

/**
 * print_chessboard-print chessboard
 * @a: to be printed
 * Return:0
 */

void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; a[indx1][7]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(a[index1][index2]);

		_putchar('\n');
	}
}
