#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the type of integer of the random variablr, n
 * Description: using function, main
 * this program prints whther n is positive, nagative ,or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is neagtive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);

}
