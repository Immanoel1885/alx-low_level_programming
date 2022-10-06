#include <stdio.h>
#include <stdlib.h>

/**
 * _muldigits - function to multiply positive integers
 * @num1: number one
 * @num2: number two
 * @argc: argument count
 *
 * Return: 0
 */
int _muldigits(int argc, int num1, int num2)
{
	if (argc > 4)
	{
		printf("error\n");
		exit(98);
	}
	int mul;

	mul = num1 * num2;

	printf("%d\n", mul);
}
