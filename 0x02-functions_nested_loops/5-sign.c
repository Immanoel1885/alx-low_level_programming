#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: the argument that is passed into the above function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n = 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
