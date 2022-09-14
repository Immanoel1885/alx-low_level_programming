#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main- entry point
 * Description: compute sum of all multiples of 3 and 5
 * Return: 0
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
