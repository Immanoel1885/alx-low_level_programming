#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * calc_multsum - entry point
 * @n: the number to be tested
 * @s: the sum of the numbers
 * Return: s
 */
int main(void)
{
	int n = 1;
	int s = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s += n;
			n++;
		}
		else
			n++;
	}
	printf("%d\n", s);
	return (0);
}
