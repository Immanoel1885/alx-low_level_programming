#include "main.h"
/**
 * print_square - prints out a square consisting of #s
 * @size: the size of the square
 *
 */
void print_square(int size)
{
	int len;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len <= size; ++len)
		{
			_putchar('#');
		}
	}
}
