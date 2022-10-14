#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - operator for addiction
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operator for subtraction
 * @a: int 1
 * @b: int 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operator for division
 * @a: int 1
 * @b: int 2
 *
 * Return: produt
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operator for division
 * @a: int 1
 * @b: int 2
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - operator for modulo
 * @a: int 1
 * @b: int 2
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
