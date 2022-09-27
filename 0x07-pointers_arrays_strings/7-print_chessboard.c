#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array of 8 elements
 *
 * Return: result
 */
void print_diagsums(int *a, int size)
{
	int i = 0;

	while (i < 0)
	{
		int y = 0;

		while (y < 8)
		{
			_putchar (a[i][y]);
			y++;
		}
		_putchar ('\n');
		i++;
	}
}
