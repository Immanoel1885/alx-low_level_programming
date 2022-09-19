#include "main.h"

/**
 * swap_int - swaps the value of two paramters
 * @a: the first parametre
 * @b: the second parameter
 *
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
