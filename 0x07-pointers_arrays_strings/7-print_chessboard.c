#include "main.h"

/**
 * print_chessboard - function prints a chessboard
 *
 * @a[8]: input array
 *
 * Return: full chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
