#include "3-clac.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: program that performs simple operations
 * @argc: arguments count
 * @argv: argument variables
 *
 * Return: result
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99); 
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
