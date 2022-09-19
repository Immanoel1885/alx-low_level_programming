#include "main.h"
/**
 * print_array - prints the elemnts of an array up to a given number
 * @a: the array
 * @n: the number given
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}