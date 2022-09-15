#include "main.h"
/**
 * main - print out numbers from 0 to 100, multiole of fizzbuzz
 * Return: 0
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
