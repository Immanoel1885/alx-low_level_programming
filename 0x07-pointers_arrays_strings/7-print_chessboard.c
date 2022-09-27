#include "main.h"
#include <stdio.h>
#define MAX 10
/**
 * print_chessboard - function that prints the chessboard
 * @a: array of 8 elements
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	char grid[MAX][MAX];
	int i, j, row, col;

	for (i = 0; i < row; i++)
	{
		grid[i][j] = '.';
		printf("%c", grid[i][j]);
	}
	printf("\n");

	return;
}
