#include "main.h"
/**
 * reverse_array - function to reverse the order of an array
 * @a: the array to be reversed
 * @n: the number of elemnts in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
	return ();
}
