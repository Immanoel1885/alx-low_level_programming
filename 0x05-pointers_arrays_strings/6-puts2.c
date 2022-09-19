#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints out every other character of a string followed by a new line
 * @str: the string to be manipulated
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%d", *str);
			_putchar('\n');
			i++;
		}
		else
			i++;
	}
}
