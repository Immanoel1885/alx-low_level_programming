#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers between n and 98
 * @n: the argument parsed into the above function
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
