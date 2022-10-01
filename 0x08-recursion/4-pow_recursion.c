#include "main.h"

/**
 * _pow_recursion - function that returns x raised to power y
 * @x: num1
 * @y: num2
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
