#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints  a times table for specified number , n
 * @n: the argument to be parsed into the fuction
 * Return: 0
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n > 15 || n < 0)
	{
		return (void);
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				else
					putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
