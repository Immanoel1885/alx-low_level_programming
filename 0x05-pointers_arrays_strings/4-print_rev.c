#include "main.h"

/**
 * print_rev - prints out a string a string in reverse
 * @s: the string we will use
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	i--;

	for (; i >=  0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
