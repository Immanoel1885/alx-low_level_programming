 #include "main.h"

/**
 * flip_bits - function that returns the numbers of bits you would
 * need to go from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m ) >> i) & 1)
			num++;
	}
	return (num);
}
