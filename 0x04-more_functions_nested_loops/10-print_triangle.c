#include "main.h"
/**
 * print_triangle - prints a triangle using the # symbol
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; ++row)
		{
			for (space = size - 1; (space = 0); --space)
			{
				_putchar(' ');
			}

			for (column = space + 1; (column = size); ++size)
			{
				_putchar('#');
			}
		}
	}
}
