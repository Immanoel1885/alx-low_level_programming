#include "main.h"
#include <stdio.h>
/**
 * calc_multsum - entry point
 * @n: the number to be tested
 * @s: the sum of the numbers
 * Return: 0
 */
int calc_multsum (int n, int s)
{

	while (n < 1024)
	{
		if ((n % 3 == 0) ||(n % 5 == 0))
		{
			s = s + n;
			n++;
		}
		else
			n++;
	}
	_putchar(s);
	return (0);
}
