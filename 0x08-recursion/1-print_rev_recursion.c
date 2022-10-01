#include "main.h"

/**
 * _print_rev_recursion - functio to print a string in reverse
 * @s: the string to be printed in reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s += 1;
	}
	else if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
