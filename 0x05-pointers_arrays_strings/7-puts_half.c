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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= strlen(str) - 1 / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
