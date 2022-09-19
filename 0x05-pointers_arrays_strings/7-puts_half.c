#include "main.h"
#include <string.h>
/**
 * puts_half -  prints the elements of array with odd position
 * @str: the string array to be manipulated
 * Return: nothing
 *
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	n = (i + 1) / 2;

	for (i = n; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
