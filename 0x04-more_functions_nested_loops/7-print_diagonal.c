#include "main.h"
/**
 * print_diagonal - prints out a diagonal line
 * @n: the accepted argument
 *
 */
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= space; ++space)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
