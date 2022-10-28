#include "main.h"

/**
 * get_endianness - function that returns the edian of the processsor
 * Return: 1 for little and 0 for big
 */
int get_endianness(void)
{
	unsigned int i;

	return ((int) (((char *)&i)[0]));
}
