#include "main.h"

/**
 * set_bit - functon that sets value of but to 1 at given index
 * @n: number
 * @index: index
 * Return: success or erroe -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);
	return (1);
}
