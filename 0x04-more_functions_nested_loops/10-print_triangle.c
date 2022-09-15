#include "main.h"
/**
 * print_triangle - prints a triangle using the # symbol
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; ++height)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
