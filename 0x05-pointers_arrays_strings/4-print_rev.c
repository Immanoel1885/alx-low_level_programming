#include "main.h"

/**
 * print_rev - prints out a string a string in reverse
 * @s: the string we will use
 *
 * Return: 0
 */
void print_rev(char *s)
{
	for (; *s != s[0]; s--)
		_putchar(*s);
}
