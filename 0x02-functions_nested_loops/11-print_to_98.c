#include "main.h"
/**
 * print_to_98.c - print the numbers between n and 98
 * @n: the argument parsed into the above function
 * Return: 0
 */
void print_to_98(int n)
{
	int i = 98 - n;

	while (i < 98)
	{
		for (; i <= 98; i++ )
		{
			_putchar(i);
		}
		i++;
	}
}
