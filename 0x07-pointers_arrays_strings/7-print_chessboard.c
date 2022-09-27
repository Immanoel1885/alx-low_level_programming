#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array of 8 elements
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row = 8;
	int col = 8;
	int disp[row][col];

	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			_putchar(disp[i][j]);
		}
		_putchar('\n');
	}
}
