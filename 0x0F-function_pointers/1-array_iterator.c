#include <stdio.h>

/**
 * array_iterator - function that executes a functon given
 * as a parameter on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
