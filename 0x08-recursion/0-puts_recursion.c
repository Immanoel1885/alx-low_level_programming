#include "main.h"

/**
 * _puts_recursion - function that prints a string and adds a newline
 * @s: the string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
