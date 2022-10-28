#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0 at given index
 * @n: number bit
 * @index: index to set value
 * Return: success or error (-1)
 */

int clear_bit (unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
